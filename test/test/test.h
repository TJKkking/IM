#ifndef TEST_H
#define TEST_H

#include <QMainWindow>

namespace Ui {
class test;
}

class test : public QMainWindow
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = nullptr);
    ~test();
    void showMessage( const QString &message);

private:
    Ui::test *ui;
};

#endif // TEST_H