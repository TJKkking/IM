#include "login.h"
#include "Register.h"
#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QtGui>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
login::login(QWidget *parent)
	: QDialog(parent)
{
	setWidget();//新建按钮
	Layout();//规划布局

	setWindowTitle(tr("LuckyCat"));
	setFixedHeight(250);
	setFixedWidth(400);

	QSettings config("UserConfig.ini", QSettings::IniFormat);
	QString uerName = config.value("USERCONFIG/UserName", "").toString();
	QString passWord = config.value("USERCONFIG/PassWord", "").toString();
	int isRember = config.value("USERCONFIG/IsRemberPas", "0").toInt();
	int isAuto = config.value("USERCONFIG/IsAutoLog", "0").toInt();
	
	if (!uerName.isEmpty() && !passWord.isEmpty())
	{
		usernameline->setText(uerName);
		pwdline->setText(passWord);
		m_NameStr = uerName;
		m_PasStr = passWord;
	}
	if (isRember == 1) {
		rempwd->setChecked(true);
		m_isRember = true;
	}
	else {
		m_isRember = false;
	}

	if (isAuto == 1) {
		autologin->setChecked(true);
		m_isAutoLog = true;
		m_isLog = true;

	}
	else {
		m_isAutoLog = false;
		m_isLog = false;
	}

	connect(usernameline, SIGNAL(textChanged(const QString&)), this, SLOT(enableLoginbtn(const QString&)));
	connect(Loginbtn, SIGNAL(clicked()), this, SLOT(LoginSlots()));
	connect(Registerbtn, SIGNAL(clicked()), this, SLOT(RegisterSlots()));
	connect(autologin, SIGNAL(stateChanged(int)), this, SLOT(AutoLogSlots(int)));
	connect(rempwd, SIGNAL(stateChanged(int)), this, SLOT(RemberSlots(int)));
}

login::~login()
{

}

void login::LoginSlots()
{

    m_NameStr = usernameline->text();
	m_PasStr = pwdline->text();
    QString s=QString("select * from user where UName='%1'and Pword='%2' ").arg(m_NameStr).arg(m_PasStr);
    QSqlQuery query;    
    if(query.exec(s) && query.first())
    {
//     this->close();
       accept();
    }
    else
       QMessageBox::warning(NULL,"Error","用户名或密码错误，请重试!!!");


}

bool login::AutoLogSlots(int state)
{
	if (state != Qt::Checked)
	{
		return false;
	}
	
	LoginSlots();
	
	return true;
}

bool login::RemberSlots(int state)
{
	if (state != Qt::Checked)
	{
		m_isRember = false;
		QSettings config("UserConfig.ini", QSettings::IniFormat);
		config.setValue("USERCONFIG/IsRemberPas", 0);
	}

	return true;
}

void login::RegisterSlots()
{
	this->hide();
	registerwindow re;
	re.show();
	re.exec();
	this->show();
}

void login::setWidget()
{
	//账号输入
    usernamelb = new QLabel(tr("用户:"));
	usernameline = new QLineEdit;
	usernamelb->setBuddy(usernamelb);

	//密码输入
    pwdlb = new QLabel(tr("密码: "));
	pwdline = new QLineEdit;
	pwdlb->setBuddy(pwdline);
	pwdline->setEchoMode(QLineEdit::Password);

	rempwd = new QCheckBox(tr("记住密码"));
	autologin = new QCheckBox(tr("自动登录"));

	//登录按钮
	Loginbtn = new QPushButton(tr("登录"));
	Loginbtn->setDefault(true);
	Loginbtn->setEnabled(false);

	//注册按钮
	Registerbtn = new QPushButton(tr("注册"));
}

void login::Layout()
{
	QHBoxLayout *usernameLayout = new QHBoxLayout;
	QHBoxLayout *pwdLayout = new QHBoxLayout;
	QHBoxLayout *butLayout = new QHBoxLayout;
	QHBoxLayout *checkLayout = new QHBoxLayout;

	usernameLayout->addStretch(1);
	usernameLayout->addWidget(usernamelb);
	usernameLayout->addWidget(usernameline);
	usernameLayout->addStretch(1);

	pwdLayout->addStretch(1);
	pwdLayout->addWidget(pwdlb);
	pwdLayout->addWidget(pwdline);
	pwdLayout->addStretch(1);

	butLayout->addStretch(1);
	butLayout->addWidget(Loginbtn);
	butLayout->addWidget(Registerbtn);
	butLayout->addStretch(1);

	checkLayout->addStretch(1);
	checkLayout->addWidget(rempwd);
	checkLayout->addWidget(autologin);
	checkLayout->addStretch(1);

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addLayout(usernameLayout);
	mainLayout->addLayout(pwdLayout);
	mainLayout->addLayout(butLayout);
	mainLayout->addLayout(checkLayout);
	setLayout(mainLayout);
}
void login::enableLoginbtn(const QString &text)
{
	Loginbtn->setEnabled(!text.isEmpty());
}
