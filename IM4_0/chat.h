#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QtCore>
#include <QtNetwork>



namespace Ui {
class chat;
}

class chat : public QWidget
{
    Q_OBJECT

public:
    chat(QString pasvusername, QString pasvuserip);
    ~chat();

public slots:
    void ReadError(QAbstractSocket::SocketError);

    void on_pushSent_clicked();
private:
    Ui::chat * ui;
    QTcpSocket * tcpClient;
    QTimer tm;
    QStringList list;
};

#endif // CHAT_H
