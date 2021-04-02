#include "mysocket.h"
#include <QDebug>
#include "dialog.h"
#include "ui_dialog.h"


MySocket::MySocket(int sockDesc, QObject *parent) :
    QTcpSocket(parent),
    m_sockDesc(sockDesc)
{
    connect(this, SIGNAL(readyRead()), this, SLOT(recvData()));
}

MySocket::~MySocket()
{

}

void MySocket::sendData(int id, const QByteArray &data)
{
//    QString msg;
//    msg += QString("me: ");
//    msg += data + "\n";
    //ui->textBrowser->append(msg);
    if (id == m_sockDesc && !data.isEmpty()) {
        this->write(data);
    }
}

void MySocket::recvData(void)
{
    QString ip = peerAddress().toString().remove(0, 7);
    QByteArray data = readAll();

    emit dataReady(ip, data);
}
