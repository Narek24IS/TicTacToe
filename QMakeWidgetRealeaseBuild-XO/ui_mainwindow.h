/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *gameNameLabel;
    QLabel *gameResultLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *choiceXButton;
    QPushButton *choiceOButton;
    QPushButton *gameStartButton;
    QPushButton *infoButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *gameTab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QWidget *infoTab;
    QHBoxLayout *horizontalLayout_3;
    QLabel *infoLabel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 450);
        MainWindow->setMinimumSize(QSize(700, 450));
        MainWindow->setMaximumSize(QSize(1050, 675));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, 20, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gameNameLabel = new QLabel(centralwidget);
        gameNameLabel->setObjectName("gameNameLabel");
        gameNameLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/name.png")));
        gameNameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(gameNameLabel);

        gameResultLabel = new QLabel(centralwidget);
        gameResultLabel->setObjectName("gameResultLabel");
        gameResultLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(gameResultLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        choiceXButton = new QPushButton(centralwidget);
        choiceXButton->setObjectName("choiceXButton");
        choiceXButton->setMinimumSize(QSize(0, 50));
        choiceXButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(choiceXButton);

        choiceOButton = new QPushButton(centralwidget);
        choiceOButton->setObjectName("choiceOButton");
        choiceOButton->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(choiceOButton);


        verticalLayout->addLayout(horizontalLayout);

        gameStartButton = new QPushButton(centralwidget);
        gameStartButton->setObjectName("gameStartButton");
        gameStartButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(gameStartButton->sizePolicy().hasHeightForWidth());
        gameStartButton->setSizePolicy(sizePolicy);
        gameStartButton->setMinimumSize(QSize(200, 40));
        gameStartButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(gameStartButton);

        infoButton = new QPushButton(centralwidget);
        infoButton->setObjectName("infoButton");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoButton->sizePolicy().hasHeightForWidth());
        infoButton->setSizePolicy(sizePolicy1);
        infoButton->setMinimumSize(QSize(200, 40));

        verticalLayout->addWidget(infoButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMaximumSize(QSize(320, 320));
        gameTab = new QWidget();
        gameTab->setObjectName("gameTab");
        gameTab->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(gameTab);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(4, 5, 5, 5);
        pushButton_4 = new QPushButton(gameTab);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_4->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        pushButton_7 = new QPushButton(gameTab);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(100, 100));
        pushButton_7->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(gameTab);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(gameTab);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton_6->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(gameTab);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(100, 100));
        pushButton_8->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_9 = new QPushButton(gameTab);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_9->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_1 = new QPushButton(gameTab);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setMinimumSize(QSize(100, 100));
        pushButton_1->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(gameTab);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(gameTab);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(100, 100));
        pushButton_3->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        tabWidget->addTab(gameTab, QString());
        infoTab = new QWidget();
        infoTab->setObjectName("infoTab");
        horizontalLayout_3 = new QHBoxLayout(infoTab);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        infoLabel = new QLabel(infoTab);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        infoLabel->setWordWrap(true);

        horizontalLayout_3->addWidget(infoLabel);

        tabWidget->addTab(infoTab, QString());

        horizontalLayout_2->addWidget(tabWidget);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\235\320\276\320\273\320\270\320\272\320\270", nullptr));
        gameNameLabel->setText(QString());
        gameResultLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        choiceXButton->setText(QString());
        choiceOButton->setText(QString());
        gameStartButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        infoButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_1->setText(QString());
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(gameTab), QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        infoLabel->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\270\320\263\321\200\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(infoTab), QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
