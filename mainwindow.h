#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTabBar>
#include <QGridLayout>

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

    void on_gameStartButton_clicked();

    void onGameAreaClickedButtonClicked();

    void onComputerSlot();

    void on_infoButton_clicked();

private:
    Ui::MainWindow *ui;
    void configurationTabWidget();
    void configurationGameAreaButtons();
    void configurationTimer();

    void setInterfaceStyle();
    void setGameAreaButtonStyle();
    void changeButtonStyle(int row, int coloumn, QString style);

    void startNewGame();
    void loseGame();
    void winGame();
    bool gameEndCheck(char symbol, QString current);
    bool gameEndCheckTactic(char symbol);


    char gameArea[3][3] = { //Массив для работы с игровым полем
        {'-','-', '-'},
        {'-','-', '-'},
        {'-','-', '-'}
    };
    char player; //Символ игрока
    char computer; //Символ компьютера
    int progress = 0; //Количество ходов в текущей сессии
    bool gameIsRun = false; //Состояние игры на текущий момент
    QTimer *timer; //Указатель на таймер для работы с ним
};
#endif // MAINWINDOW_H
