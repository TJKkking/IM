#include "mainwidget.h"
#include "ui_mainwidget.h"

#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtMath>


MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget),
    chart(new QChart),
    tip(0),
    timer(new QTimer),
    count(0),
    isStopping(false)
{
    ui->setupUi(this);

    initUI();

    timer->setInterval(50);
    timer->start();

    initSlot();
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::wheelEvent(QWheelEvent *event)
{
    if (event->delta() > 0) {
        chart->zoom(1.1);
    } else {
        chart->zoom(10.0/11);
    }

    QWidget::wheelEvent(event);
}

void MainWidget::initUI()
{
    ui->comboBox->addItem("TCP");
    ui->comboBox->addItem("UDP");

    auto ports = QSerialPortInfo::availablePorts();
    for (auto port : ports) {
        ui->comboBox->addItem(port.portName());
    }

    initChart();
}

void MainWidget::initChart()
{
    series = new QLineSeries;

    chart->addSeries(series);

//    series->setUseOpenGL(true);

    chart->createDefaultAxes();
    chart->axisY()->setRange(-10, 10);
    chart->axisX()->setRange(0, 96);

    chart->axisX()->setTitleFont(QFont("Microsoft YaHei", 10, QFont::Normal, true));
    chart->axisY()->setTitleFont(QFont("Microsoft YaHei", 10, QFont::Normal, true));
    chart->axisX()->setTitleText("Time/sec");
    chart->axisY()->setTitleText("Speed/m");

    chart->axisX()->setGridLineVisible(false);
    chart->axisY()->setGridLineVisible(false);

    /* hide legend */
    chart->legend()->hide();

    chartView = new ChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->mainHorLayout->addWidget(chartView);
}

void MainWidget::initSlot()
{
    connect(timer, SIGNAL(timeout()), this, SLOT(timerSlot()));
    connect(ui->stopBtn, SIGNAL(clicked(bool)), this, SLOT(buttonSlot()));
    connect(series, SIGNAL(hovered(QPointF, bool)), this, SLOT(tipSlot(QPointF,bool)));
}

void MainWidget::updateData()
{
    int i;
    QVector<QPointF> oldData = series->pointsVector();
    QVector<QPointF> data;

    if (oldData.size() < 97) {
        data = series->pointsVector();
    } else {
        /* ?????????????????????????????????vector???????????????????????????????????????????????????????????????
         * ???????????????????????????1?????????????????????1????????????????????????????????????
         */
        for (i = 1; i < oldData.size(); ++i) {
            data.append(QPointF(i - 1 , oldData.at(i).y()));
        }
    }

    qint64 size = data.size();
    /* ??????????????????????????????????????????????????????1???????????????i < 1,
     * ??????????????????????????????????????????????????????
     */
    for(i = 0; i < 1; ++i){
        data.append(QPointF(i + size, 10 * sin(M_PI * count * 4 / 180)));
    }

    series->replace(data);

    count++;
}

void MainWidget::timerSlot()
{
    if (QObject::sender() == timer) {
        updateData();
    }
}

void MainWidget::buttonSlot()
{
    if (QObject::sender() == ui->stopBtn) {
        if (!isStopping) {
            timer->stop();
        } else {
            timer->start();
        }
        isStopping = !isStopping;
    }
}

void MainWidget::tipSlot(QPointF position, bool isHovering)
{
    if (tip == 0)
        tip = new Callout(chart);

    if (isHovering) {
        tip->setText(QString("X: %1 \nY: %2 ").arg(position.x()).arg(position.y()));
        tip->setAnchor(position);
        tip->setZValue(11);
        tip->updateGeometry();
        tip->show();
    } else {
        tip->hide();
    }
}

