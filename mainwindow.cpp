#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stylehelper.h"

/*Конструктор класса, с помощью которого инициализируется окно*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    player('X')
{
    ui->setupUi(this);
    configurationTabWidget();
    setInterfaceStyle();
    configurationGameAreaButtons();
    configurationTimer();
}
/*Декеонструктор класса*/
MainWindow::~MainWindow()
{
    delete ui;
}


/*Для инициализации таймера и соединения его с дейстивем компьютера*/
void MainWindow::configurationTimer()
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::onComputerSlot);
}
/*Изменение внешнего вида игрового поля*/
void MainWindow::configurationTabWidget()
{
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
}
/*Настройка кнопок игрового поля для дальнейшего использования*/
void MainWindow::configurationGameAreaButtons()
{
    QGridLayout *grid = qobject_cast <QGridLayout*>(ui->gameTab->layout());
    for (int row = 0; row < 3; ++row)
    {
        for (int coloumn = 0; coloumn < 3; ++coloumn)
        {
            QPushButton *btn = qobject_cast <QPushButton*>(grid->itemAtPosition(row, coloumn)->widget());
            btn->setProperty("row", row);
            btn->setProperty("coloumn", coloumn);
            connect(btn, &QPushButton::clicked, this, &MainWindow::onGameAreaClickedButtonClicked);
        }
    }
}


/*Выставление изначального вида всех компонентов*/
void MainWindow::setInterfaceStyle()
{
    this->setStyleSheet(StyleHelper::getMainWindowStyle());

    ui->gameStartButton->setStyleSheet(StyleHelper::getStartButtonStyle());
    ui->gameStartButton->setCursor(QCursor(Qt::PointingHandCursor));
    ui->infoButton->setStyleSheet(StyleHelper::getStartButtonStyle());
    ui->infoButton->setCursor(QCursor(Qt::PointingHandCursor));

    ui->choiceOButton->setStyleSheet(StyleHelper::getOButtonStyle());
    ui->choiceOButton->setCursor(QCursor(Qt::PointingHandCursor));
    ui->choiceXButton->setStyleSheet(StyleHelper::getActiveXButtonStyle());
    ui->choiceXButton->setCursor(QCursor(Qt::PointingHandCursor));

    ui->tabWidget->setStyleSheet(StyleHelper::getTabWidgetStyle());
    ui->gameResultLabel->setStyleSheet(StyleHelper::getInfoGameResultLabelStyle());
    ui->infoLabel->setStyleSheet(StyleHelper::getAboutGameStyle());

    setGameAreaButtonStyle();
}
/*Приведение кнопок в изначальный вид*/
void MainWindow::setGameAreaButtonStyle()
{
    QString style = StyleHelper::getBlankButtonStyle();

    for (int row = 0; row < 3; ++row)
    {
        for (int coloumn = 0; coloumn < 3; ++coloumn)
        {
            changeButtonStyle(row, coloumn, style);
        }
    }
}
/*Изменение стиля конкретной кнопки*/
void MainWindow::changeButtonStyle(int row, int coloumn, QString style)
{
    QGridLayout *grid = qobject_cast <QGridLayout*>(ui->gameTab->layout());
    QPushButton *btn = qobject_cast <QPushButton*>(grid->itemAtPosition(row, coloumn)->widget());
    btn->setCursor(QCursor(Qt::PointingHandCursor));
    btn->setStyleSheet(style);
}


/*Изменение интерфейса для начала новой игры*/
void MainWindow::startNewGame()
{
    for (int row = 0; row < 3; ++row)
    {
        for (int coloumn = 0; coloumn < 3; ++coloumn)
        {
            gameArea[row][coloumn] = '-';
        }
    }
    progress = 0;
    gameIsRun = true;
    ui->choiceOButton->setDisabled(true);
    ui->choiceXButton->setDisabled(true);
    ui->gameResultLabel->setText("Ходят крестики");
    ui->gameResultLabel->setStyleSheet(StyleHelper::getInfoGameResultLabelStyle());
    ui->gameStartButton->setText("Сдаться");
    ui->gameStartButton->setStyleSheet(StyleHelper::getLoseButtonStyle());
    setGameAreaButtonStyle();

    if(player == 'O')
        timer->start(1000);
}
/*Изменение интерфейса для сообщения о проигрыше*/
void MainWindow::loseGame()
{
    for (int row = 0; row < 3; ++row)
    {
        for (int coloumn = 0; coloumn < 3; ++coloumn)
        {
            gameArea[row][coloumn] = '-';
        }
    }
    progress = 0;
    gameIsRun = false;
    ui->choiceOButton->setDisabled(false);
    ui->choiceXButton->setDisabled(false);
    ui->gameResultLabel->setText("Вы проиграли");
    ui->gameResultLabel->setStyleSheet(StyleHelper::getLoseGameResultLabelStyle());
    ui->gameStartButton->setText("Играть ещё");
    ui->gameStartButton->setStyleSheet(StyleHelper::getStartButtonStyle());
}
/*Изменение интерфейса для сообщения о победе*/
void MainWindow::winGame()
{
    for (int row = 0; row < 3; ++row)
    {
        for (int coloumn = 0; coloumn < 3; ++coloumn)
        {
            gameArea[row][coloumn] = '-';
        }
    }
    progress = 0;
    gameIsRun = false;
    ui->choiceOButton->setDisabled(false);
    ui->choiceXButton->setDisabled(false);
    ui->gameResultLabel->setText("Вы победили");
    ui->gameResultLabel->setStyleSheet(StyleHelper::getVictoryGameResultLabelStyle());
    ui->gameStartButton->setText("Играть ещё");
    ui->gameStartButton->setStyleSheet(StyleHelper::getStartButtonStyle());
}
/*Проверка на конец игры. Окрашивает победную комбинацию*/
bool MainWindow::gameEndCheck(char symbol, QString current)
{
    if(current == "player")
    {
        for (int i = 0; i < 3; ++i)
        {
            if(gameArea[i][0]==symbol and gameArea[i][1]==symbol and gameArea[i][2]==symbol)
            {
                for (int j = 0; j < 3; ++j) {
                    if(symbol == 'X')
                        changeButtonStyle(i, j, StyleHelper::getCrossVictoryStyle());
                    else
                        changeButtonStyle(i, j, StyleHelper::getZeroVictoryStyle());
                }
                return true;
            }
            else if(gameArea[0][i]==symbol and gameArea[1][i]==symbol and gameArea[2][i]==symbol)
            {
                for (int j = 0; j < 3; ++j)
                {
                    if(symbol == 'X')
                        changeButtonStyle(j, i, StyleHelper::getCrossVictoryStyle());
                    else
                        changeButtonStyle(j, i, StyleHelper::getZeroVictoryStyle());
                }
                return true;
            }
        }
        if(gameArea[0][0]==symbol and gameArea[1][1]==symbol and gameArea[2][2]==symbol)
        {
            for (int i = 0; i < 3; ++i)
            {
                if(symbol == 'X')
                    changeButtonStyle(i, i, StyleHelper::getCrossVictoryStyle());
                else
                    changeButtonStyle(i, i, StyleHelper::getZeroVictoryStyle());
            }
            return true;
        }
        else if(gameArea[0][2]==symbol and gameArea[1][1]==symbol and gameArea[2][0]==symbol)
        {
            if(symbol == 'X')
            {
                changeButtonStyle(0, 2, StyleHelper::getCrossVictoryStyle());
                changeButtonStyle(1, 1, StyleHelper::getCrossVictoryStyle());
                changeButtonStyle(2, 0, StyleHelper::getCrossVictoryStyle());
            }
            else
            {
                changeButtonStyle(0, 2, StyleHelper::getZeroVictoryStyle());
                changeButtonStyle(1, 1, StyleHelper::getZeroVictoryStyle());
                changeButtonStyle(2, 0, StyleHelper::getZeroVictoryStyle());
            }
            return true;
        }
    }
    else
    {
        for (int i = 0; i < 3; ++i)
        {
            if(gameArea[i][0]==symbol and gameArea[i][1]==symbol and gameArea[i][2]==symbol)
            {
                for (int j = 0; j < 3; ++j) {
                    if(symbol == 'X')
                        changeButtonStyle(i, j, StyleHelper::getCrossLossStyle());
                    else
                        changeButtonStyle(i, j, StyleHelper::getZeroLossStyle());
                }
                return true;
            }
            else if(gameArea[0][i]==symbol and gameArea[1][i]==symbol and gameArea[2][i]==symbol)
            {
                for (int j = 0; j < 3; ++j)
                {
                    if(symbol == 'X')
                        changeButtonStyle(j, i, StyleHelper::getCrossLossStyle());
                    else
                        changeButtonStyle(j, i, StyleHelper::getZeroLossStyle());
                }
                return true;
            }
        }
        if(gameArea[0][0]==symbol and gameArea[1][1]==symbol and gameArea[2][2]==symbol)
        {
            for (int i = 0; i < 3; ++i)
            {
                if(symbol == 'X')
                    changeButtonStyle(i, i, StyleHelper::getCrossLossStyle());
                else
                    changeButtonStyle(i, i, StyleHelper::getZeroLossStyle());
            }
            return true;
        }
        else if(gameArea[0][2]==symbol and gameArea[1][1]==symbol and gameArea[2][0]==symbol)
        {
            if(symbol == 'X')
            {
                changeButtonStyle(0, 2, StyleHelper::getCrossLossStyle());
                changeButtonStyle(1, 1, StyleHelper::getCrossLossStyle());
                changeButtonStyle(2, 0, StyleHelper::getCrossLossStyle());
            }
            else
            {
                changeButtonStyle(0, 2, StyleHelper::getZeroLossStyle());
                changeButtonStyle(1, 1, StyleHelper::getZeroLossStyle());
                changeButtonStyle(2, 0, StyleHelper::getZeroLossStyle());
            }
            return true;
        }
    }
    return false;
}
/*Проверка на конец игры. Нужен для выбора хода компьютера*/
bool MainWindow::gameEndCheckTactic(char symbol)
{
    for (int i = 0; i < 3; ++i)
    {
        if(gameArea[i][0]==symbol and gameArea[i][1]==symbol and gameArea[i][2]==symbol)
            return true;
        else if(gameArea[0][i]==symbol and gameArea[1][i]==symbol and gameArea[2][i]==symbol)
            return true;
    }
    if(gameArea[0][0]==symbol and gameArea[1][1]==symbol and gameArea[2][2]==symbol)
        return true;
    else if(gameArea[0][2]==symbol and gameArea[1][1]==symbol and gameArea[2][0]==symbol)
        return true;
    return false;
}


/*Нажатие на кнопку выбора крестика*/
void MainWindow::on_choiceXButton_clicked()
{
    ui->choiceOButton->setStyleSheet(StyleHelper::getOButtonStyle());
    ui->choiceXButton->setStyleSheet(StyleHelper::getActiveXButtonStyle());
    player = 'X';
    computer = 'O';
}
/*Нажатие на кнопку выбора нолика*/
void MainWindow::on_choiceOButton_clicked()
{
    ui->choiceOButton->setStyleSheet(StyleHelper::getActiveOButtonStyle());
    ui->choiceXButton->setStyleSheet(StyleHelper::getXButtonStyle());
    player = 'O';
    computer = 'X';
}
/*Нажатие на копку начала игры или сдаться, в зависимости от состояния*/
void MainWindow::on_gameStartButton_clicked()
{
    if(gameIsRun)
    {
        loseGame();
    }
    else
    {
        startNewGame();
    }
}
/*Нажатие на любую кнопку поля игроком, чтобы поставить фигуру*/
void MainWindow::onGameAreaClickedButtonClicked()
{
    if(gameIsRun)
    {
        QPushButton *btn = qobject_cast<QPushButton*>(sender());
        int row = btn->property("row").toInt();
        int coloumn = btn->property("coloumn").toInt();
        if(gameArea[row][coloumn] == '-')
        {
            if(player == 'X')
            {
                changeButtonStyle(row, coloumn, StyleHelper::getCrossNormalStyle());
                ui->gameResultLabel->setText("Ходят нолики");
            }
            else
            {
                changeButtonStyle(row, coloumn, StyleHelper::getZeroNormalStyle());
                ui->gameResultLabel->setText("Ходят крестики");
            }
            gameArea[row][coloumn] = player;
            progress++;
            if(gameEndCheck(player, "player"))
            {
                winGame();
            }
            else if(progress == 9)
            {
                winGame();
                ui->gameResultLabel->setText("Ничья");
                ui->gameResultLabel->setStyleSheet(StyleHelper::getInfoGameResultLabelStyle());
            }
            else
            {
                timer->start(1000);
            }
        }
    }
}
/*Ход компьютера*/
void MainWindow::onComputerSlot()
{
    int compTactic[9][2] = {{1, 1}, {0, 0}, {0, 2}, {2, 0}, {2, 2},
                            {0, 1}, {1, 0}, {1, 2}, {2, 1}};

    for (int row = 0; row < 3; ++row) {
        for (int coloumn = 0; coloumn < 3; ++coloumn) {
            if(gameArea[row][coloumn] == '-')
            {
                gameArea[row][coloumn] = computer;
                if(gameEndCheck(computer, "computer"))
                {
                    loseGame();
                    timer->stop();
                    return;
                }
                gameArea[row][coloumn] = '-';
            }
        }
    }
    for (int row = 0; row < 3; ++row) {
        for (int coloumn = 0; coloumn < 3; ++coloumn) {
            if(gameArea[row][coloumn] == '-')
            {
                gameArea[row][coloumn] = player;
                if(gameEndCheckTactic(player))
                {
                    gameArea[row][coloumn] = computer;
                    if(computer == 'X')
                    {
                        changeButtonStyle(row, coloumn, StyleHelper::getCrossNormalStyle());
                        ui->gameResultLabel->setText("Ходят нолики");
                    }
                    else
                    {
                        changeButtonStyle(row, coloumn, StyleHelper::getZeroNormalStyle());
                        ui->gameResultLabel->setText("Ходят крестики");
                    }
                    progress++;
                    timer->stop();
                    if(progress == 9)
                    {
                        winGame();
                        ui->gameResultLabel->setText("Ничья");
                        ui->gameResultLabel->setStyleSheet(StyleHelper::getInfoGameResultLabelStyle());
                    }
                    return;
                }
                gameArea[row][coloumn] = '-';
            }
        }
    }
    for (int i = 0; i < 9; ++i) {
        int row = compTactic[i][0];
        int coloumn = compTactic[i][1];
        if(gameArea[row][coloumn] == '-')
        {
            if(computer == 'X')
            {
                changeButtonStyle(row, coloumn, StyleHelper::getCrossNormalStyle());
                ui->gameResultLabel->setText("Ходят нолики");
            }
            else
            {
                changeButtonStyle(row, coloumn, StyleHelper::getZeroNormalStyle());
                ui->gameResultLabel->setText("Ходят крестики");
            }
            gameArea[row][coloumn] = computer;
            progress++;
            if(gameEndCheck(computer, "computer"))
            {
                loseGame();
            }
            else if(progress == 9)
            {
                winGame();
                ui->gameResultLabel->setText("Ничья");
                ui->gameResultLabel->setStyleSheet(StyleHelper::getInfoGameResultLabelStyle());
            }
            timer->stop();
            return;
        }
    }
}
/*Для показа и скрытия информации об игре*/
void MainWindow::on_infoButton_clicked()
{
    if(ui->tabWidget->currentIndex()==0)
        ui->tabWidget->setCurrentIndex(1);
    else
        ui->tabWidget->setCurrentIndex(0);
}

