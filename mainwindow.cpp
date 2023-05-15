#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stylehelper.h"
#include <QTabBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
    setInterfaceStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setInterfaceStyle()
{
    ui->gameStartButton->setStyleSheet(StyleHelper::getButtonStyle());
    ui->infoButton->setStyleSheet(StyleHelper::getButtonStyle());
    this->setStyleSheet(StyleHelper::getMainWindowStyle());
    ui->choiceOButton->setStyleSheet(StyleHelper::getOButtonStyle());
    ui->choiceXButton->setStyleSheet(StyleHelper::getXButtonStyle());
    ui->tabWidget->setStyleSheet(StyleHelper::getTabWidgetStyle()+StyleHelper::getBlankButtonStyle());
    ui->gameResultLabel->setStyleSheet(StyleHelper::getLossGameResultLabelStyle());

    ui->pushButton_1->setStyleSheet(StyleHelper::getCrossNormalStyle());
    ui->pushButton_2->setStyleSheet(StyleHelper::getCrossVictoryStyle());
    ui->pushButton_3->setStyleSheet(StyleHelper::getCrossLossStyle());
    ui->pushButton_4->setStyleSheet(StyleHelper::getZeroNormalStyle());
    ui->pushButton_5->setStyleSheet(StyleHelper::getZeroVictoryStyle());
    ui->pushButton_6->setStyleSheet(StyleHelper::getZeroLossStyle());
}


void MainWindow::on_choiceXButton_clicked()
{
    ui->choiceOButton->setStyleSheet(StyleHelper::getOButtonStyle());
    ui->choiceXButton->setStyleSheet(StyleHelper::getActiveXButtonStyle());
}


void MainWindow::on_choiceOButton_clicked()
{
    ui->choiceOButton->setStyleSheet(StyleHelper::getActiveOButtonStyle());
    ui->choiceXButton->setStyleSheet(StyleHelper::getXButtonStyle());
}

