#include "login.h"
#include <QApplication>
#include <QtSql>
#include <QMessageBox>
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("127.0.0.1");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
       db.setPort(3306);                 //连接数据库端口号，与设置一致
        db.setDatabaseName("loading");      //连接数据库名，与设置一致
        db.setUserName("root");          //数据库用户名，与设置一致
        db.setPassword("123");    //数据库密码，与设置一致
        db.open();
        if(db.open())
        {
            w.show();
        }
        else
        {
            QMessageBox::warning(NULL,"error","数据库无法连接 ");
            return 0;
        }

        MainWindow  m;
    if (w.exec()== QDialog:: Accepted)
    {
        m.show();
        return a.exec();

    }
    return a.exec();
}
