#include "server.h"
#include "ui_server.h"

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QVector>


Server::Server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
}

Server::~Server()
{
    delete ui;
}

void Server::showMessage( const QString &message)
{
    ui->msgbox->insertPlainText(message);
    ui->msgbox->ensureCursorVisible();
}
