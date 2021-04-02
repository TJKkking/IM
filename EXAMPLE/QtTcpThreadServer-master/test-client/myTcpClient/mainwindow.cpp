#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpClient = new QTcpSocket(this);
    ui->pushSent->setEnabled(false);
    //this->ui->timeBut->setEnabled(false);
    tcpClient->abort();
    connect(tcpClient,&QTcpSocket::readyRead,
            [&](){this->ui->textEdit->append(tr("%1 Server Say: %2").arg(QTime::currentTime().toString("hh:mm:ss.zzz")).arg(QString(this->tcpClient->readAll())));});
    connect(tcpClient,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(ReadError(QAbstractSocket::SocketError)));
    connect(&tm,&QTimer::timeout,[&](){
            int i = qrand() % 6;
            this->ui->textEdit->append(tr("%1 Timer Sent: %2").arg(QTime::currentTime().toString("hh:mm:ss.zzz")).arg(list.at(i)));
            tcpClient->write(list.at(i).toUtf8());
    });
    connect(tcpClient,&QTcpSocket::disconnected,[](){qDebug()<< "123333" ;});
    QString ipAdd("192.168.43.209"), portd("12000");
        if (ipAdd.isEmpty() || portd.isEmpty())
        {
            this->ui->textEdit->append("请输入IP和端口!");
            return;
        }
        tcpClient->connectToHost(ipAdd,portd.toInt());
        if (tcpClient->waitForConnected(1000))
        {
            ui->textEdit->append("Successfully connected to the server.");
            ui->pushSent->setEnabled(true);
        }
    list << "我是谁?" << "渡世白玉" << "hello" << "哈哈哈哈哈" << "你是坏蛋!" <<  "测试一下下了" << "不知道写什么" ;
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete tcpClient;
}



void MainWindow::on_pushSent_clicked()
{
    qDebug() << "点击发送：" ;
    QString data = this->ui->txtData->toPlainText();//->text();
    this->ui->txtData->clear();
    if (data.isEmpty())
    {
        return ;
    }
    tcpClient->write(data.toUtf8());
    ui->textEdit->append(tr("Me: %1").arg(data));
}

void MainWindow::ReadError(QAbstractSocket::SocketError)
{
    tcpClient->disconnectFromHost();
    ui->textEdit->append(tr("Lost connection: %1").arg(tcpClient->errorString()));
    ui->pushSent->setEnabled(false);
    tm.stop();
}


