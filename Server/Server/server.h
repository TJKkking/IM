#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QVector>
#include<winsock.h>
#include<Windows.h>

namespace Ui {
class Server;
}

class Server : public QMainWindow
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);
    ~Server();
    void showMessage(const QString &message);

private:
    Ui::Server *ui;

private slots:

};

//class TcpServer : public QObject
//{
//    Q_OBJECT

//public:
//    explicit TcpServer(QObject *parent = nullptr);
//    ~TcpServer();
//    bool StartListen(int port = 6666);
//    void CloseListen();

//signals:
//    void signalUserStatus(const QString &text);                                         //?
//protected:
//    QTcpServer *m_tcpServer;                                                            //?

//public slots:
//    void SltForwardToClient(const int &userId, const QString &message);                 //UID类型存疑，源SltTransFileToClient

//protected slots:

//private:
//    QList<QTcpSocket *> clientSockets;                                              //客户端套接字

//private slots:
//    void SltNewConnection();
//    void SltConnected();
//    void SltDisConnected();
//    void SltMsgToClient(const quint8 &type, const int &id, const QJsonValue &json);
//};

//class TcpServer : public QObject {
//    Q_OBJECT
//public:
//    explicit TcpServer(QObject *parent = 0);
//    ~TcpServer();

//    bool StartListen(int port = 12000);
//    void CloseListen();
//signals:
//    //void signalUserStatus(const QString &text);
//protected:
//    QTcpServer *m_tcpServer;

//public slots:

//protected slots:
//    // 继承虚函数
//    virtual void SltNewConnection() = 0;
//    virtual void SltConnected() = 0;
//    virtual void SltDisConnected() = 0;
//};

///////////////////////////////////////////////////////
/// \brief The TcpMsgServer class
/// 消息服务器
//class TcpMsgServer : public TcpServer
//{
//    Q_OBJECT
//public:
//    explicit TcpMsgServer(QObject *parent = 0);
//    ~TcpMsgServer();

//signals:
//    void signalDownloadFile(const QJsonValue &json);                                    //?

//private:
//    // 客户端管理
//    QVector < QTcpSocket * > m_clients;
//public slots:
//    void SltTransFileToClient(const int &userId, const QString &message);           //改动

//private slots:
//    void SltNewConnection();
//    void SltConnected();
//    void SltDisConnected();
//    void SltMsgToClient(const quint8 &type, const int &id, const QJsonValue &json);
//};


#endif // SERVER_H
