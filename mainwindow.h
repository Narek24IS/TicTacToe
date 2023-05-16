#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_choiceXButton_clicked();
    void on_choiceOButton_clicked();

private:
    Ui::MainWindow *ui;
    void setInterfaceStyle();
    void configurationTabWidget();
    void changeButtonStyle(int row, int coloumn, QString style);
    char gameArea[3][3] = {
        {'-','-', '-'},
        {'-','-', '-'},
        {'-','-', '-'}
    };
    char player = 'X';
    int progress = 0;
};
#endif // MAINWINDOW_H
