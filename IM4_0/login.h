#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = 0);
    ~login();
    QString m_NameStr;
    QString m_PasStr;
    bool m_isRember;
    bool m_isAutoLog;
    bool m_isLog;
public slots:
    void LoginSlots();
    void RegisterSlots();
    bool AutoLogSlots(int);
    bool RemberSlots(int);
private slots:
    void enableLoginbtn(const QString &text);
private:
    QLabel *usernamelb;
    QLabel *pwdlb;
    QLineEdit *usernameline;
    QLineEdit *pwdline;
    QCheckBox *rempwd;
    QCheckBox *autologin;
    QPushButton *Loginbtn;
    QPushButton *Registerbtn;

    void setWidget();
    void Layout();
};

#endif // LOGIN_H
