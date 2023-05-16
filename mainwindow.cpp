#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stylehelper.h"
#include <QTabBar>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    configurationTabWidget();
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

    changeButtonStyle(0, 0, StyleHelper::getCrossNormalStyle());
    ui->pushButton_0_1->setStyleSheet(StyleHelper::getCrossVictoryStyle());
    ui->pushButton_0_2->setStyleSheet(StyleHelper::getCrossLossStyle());
    ui->pushButton_1_0->setStyleSheet(StyleHelper::getZeroNormalStyle());
    ui->pushButton_1_1->setStyleSheet(StyleHelper::getZeroVictoryStyle());
    ui->pushButton_1_2->setStyleSheet(StyleHelper::getZeroLossStyle());
}

void MainWindow::configurationTabWidget()
{
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::changeButtonStyle(int row, int coloumn, QString style)
{
    QGridLayout *grid = qobject_cast <QGridLayout*>(ui->gameTab->layout());
    QPushButton *btn = qobject_cast <QPushButton*>(grid->itemAtPosition(row, coloumn)->widget());
    btn->setStyleSheet(style);
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

