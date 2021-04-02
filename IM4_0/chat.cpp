#include "chat.h"
#include "ui_chat.h"



chat::chat(QString pasvusername, QString pasvuserip) : ui(new Ui::chat)

{
    ui->setupUi(this);
    tcpClient = new QTcpSocket(this);
    ui->pushButton->setEnabled(false);
    //this->ui->timeBut->setEnabled(false);
    tcpClient->abort();
    connect(tcpClient,&QTcpSocket::readyRead,
            [&](){this->ui->textBrowser->append(tr("%1 Server Say: %2").arg(QTime::currentTime().toString("hh:mm:ss.zzz")).arg(QString(this->tcpClient->readAll())));});
    connect(tcpClient,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(ReadError(QAbstractSocket::SocketError)));
    connect(&tm,&QTimer::timeout,[&](){
            int i = qrand() % 6;
            this->ui->textBrowser->append(tr("%1 Timer Sent: %2").arg(QTime::currentTime().toString("hh:mm:ss.zzz")).arg(list.at(i)));
            tcpClient->write(list.at(i).toUtf8());
    });
    connect(tcpClient,&QTcpSocket::disconnected,[](){qDebug()<< "123333" ;});
    QString ipAdd(pasvuserip), portd("12000");
//        if (ipAdd.isEmpty() || portd.isEmpty())
//        {
//            this->ui->textEdit->append("请输入IP和端口!");
//            return;
//        }
        tcpClient->connectToHost(ipAdd,portd.toInt());
        if (tcpClient->waitForConnected(1000))
        {
            ui->textBrowser->append("Successfully connected to the server.");
            ui->pushButton->setEnabled(true);
        }
    list << "我是谁?" << "渡世白玉" << "hello" << "哈哈哈哈哈" << "你是坏蛋!" <<  "测试一下下了" << "不知道写什么" ;
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);

}

chat::~chat()
{
    delete ui;
    delete tcpClient;
}



void chat::on_pushSent_clicked()
{
    qDebug() << "点击发送：" ;
    QString data = this->ui->textEdit->toPlainText();//->text();                                //textEdit  输入框
                                                                                                  //textBrowser  输出框
    this->ui->textEdit->clear();
    if (data.isEmpty())
    {
        return ;
    }
    tcpClient->write(data.toUtf8());
    ui->textBrowser->append(tr("Me: %1").arg(data));
}

void chat::ReadError(QAbstractSocket::SocketError)
{
    tcpClient->disconnectFromHost();
    ui->textBrowser->append(tr("Lost connection: %1").arg(tcpClient->errorString()));
    ui->pushButton->setEnabled(false);
    tm.stop();
}


