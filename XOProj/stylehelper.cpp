#include "stylehelper.h"

QString StyleHelper::getButtonStyle()
{
    return "QPushButton{"
                "color:#fff;"
                "border:none;"
                "border-radius:20px;"
                "background-color: qlineargradient(spread:pad, x1:0.561, y1:0.919955,"
                "x2:0.49, y2:0, stop:0.0190476 rgba(60, 89, 255, 255), stop:0.509524 rgba(30, 148, 255, 255));"
                "font-family: 'Roboto Medium';"
                "font-size: 16px;"
           "}"
           "QPushButton::hover{"
                "background-color: qlineargradient(spread:pad, x1:0.561, y1:0.919955,"
                "x2:0.49, y2:0, stop:0.0190476 rgba(70, 98, 255, 255), stop:0.509524 rgba(64, 165, 255, 255));"
           "}"
           "QPushButton::pressed{"
                "background-color: qlineargradient(spread:pad, x1:0.561, y1:0.919955,"
                "x2:0.49, y2:0, stop:0.0190476 rgba(60, 89, 255, 255), stop:0.509524 rgba(30, 148, 255, 255));"
           "}";
}

QString StyleHelper::getMainWindowStyle()
{
    return "MainWindow{"
                "background-image: url(:/resources/images/bg.png)"
           "}";
}

QString StyleHelper::getXButtonStyle()
{
    return "QPushButton{"
               "background-color: qlineargradient(spread:pad, x1:0.971714, y1:0.977,x2:1,"
               "y2:0, stop:0 rgba(170, 0, 255, 255), stop:0.857143 rgba(93, 131, 255, 255));"
               "background-image: url(:/resources/images/cross_small.png);"
               "background-repeat: no-repeat;"
               "background-position: center center;"
               "border: 1px solid #333;"
               "border-top-left-radius: 5px;"
               "border-bottom-left-radius: 5px;"
           "}";
}

QString StyleHelper::getActiveXButtonStyle()
{
    return "QPushButton{"
               "background-color: #2d313b;"
               "background-image: url(:/resources/images/cross_small.png);"
               "background-repeat: no-repeat;"
               "background-position: center center;"
               "border: 1px solid #333;"
               "border-top-left-radius: 5px;"
               "border-bottom-left-radius: 5px;"
           "}";
}

QString StyleHelper::getOButtonStyle()
{
    return "QPushButton{"
               "background-color: qlineargradient(spread:pad, x1:0.971714, y1:0.977,x2:1,"
               "y2:0, stop:0 rgba(170, 0, 255, 255), stop:0.857143 rgba(93, 131, 255, 255));"
               "background-image: url(:/resources/images/zero_small.png);"
               "background-repeat: no-repeat;"
               "background-position: center center;"
               "border: 1px solid #333;"
               "border-left: none;"
               "border-top-right-radius: 5px;"
               "border-bottom-right-radius: 5px;"
           "}";
}

QString StyleHelper::getActiveOButtonStyle()
{
    return "QPushButton{"
               "background-color: #2d313b;"
               "background-image: url(:/resources/images/zero_small.png);"
               "background-repeat: no-repeat;"
               "background-position: center center;"
               "border: 1px solid #333;"
               "border-left: none;"
               "border-top-right-radius: 5px;"
               "border-bottom-right-radius: 5px;"
           "}";
}

QString StyleHelper::getTabWidgetStyle()
{
    return "QTabWidget{"
                "border:none;"
           "}"
           "QTabWidget::pane{"
                "border:1px solid #222;"
                "border-radius:3px;"
           "}"
           "QWidget#gameTab{"
                "background-color: rgb(33, 40, 50);"
           "}";
}

QString StyleHelper::getBlankButtonStyle()
{
    return "QPushButton{"
                "border:none;"
                "background: #272D39;"
           "}"
           "QPushButton::hover{"
                "background: #2A2F3C;"
           "}";
}

QString StyleHelper::getCrossNormalStyle()
{
    return "QPushButton{"
                "border:none;"
                "background: #272D39 url(:/resources/images/cross_large.png) no-repeat center center;"
           "}"
                "QPushButton::hover{"
                "background-color: #2A2F3C;"
           "}";
}

QString StyleHelper::getCrossLossStyle()
{
    return "QPushButton{"
                "border:none;"
                "background: #81071D url(:/resources/images/cross_large.png) no-repeat center center;"
           "}";
}

QString StyleHelper::getCrossVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #20401B url(:/resources/images/cross_large.png) no-repeat center center;"
           "}";
}

QString StyleHelper::getZeroNormalStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #272D39 url(:/resources/images/zero_large.png) no-repeat center center;"
           "}"
           "QPushButton::hover{"
           "background-color: #2A2F3C;"
           "}";
}

QString StyleHelper::getZeroLossStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #81071D url(:/resources/images/zero_large.png) no-repeat center center;"
           "}";
}

QString StyleHelper::getZeroVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #20401B url(:/resources/images/zero_large.png) no-repeat center center;"
           "}";
}
