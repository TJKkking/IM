#include "test.h"
#include "ui_test.h"

test::test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
}

test::~test()
{
    delete ui;
}

void test::showMessage( const QString &message)
{
    //ui->testbox->insertPlainText(QString::fromLatin1("%1: \n %2\n").arg(message));
    //ui->testbox->ensureCursorVisible();
    ui->TESTBOX->insertPlainText(QString::fromLatin1("%1: \n").arg(message));
    ui->textBrowser_2->insertPlainText(QString::fromLatin1("%1: \n").arg(message));
}
