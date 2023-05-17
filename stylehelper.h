#ifndef STYLEHELPER_H
#define STYLEHELPER_H
#include <QString>

class StyleHelper
{
public:
    static QString getMainWindowStyle();
    static QString getTabWidgetStyle();
    static QString getAboutGameStyle();

    static QString getStartButtonStyle();
    static QString getLoseButtonStyle();

    static QString getXButtonStyle();
    static QString getOButtonStyle();
    static QString getActiveXButtonStyle();
    static QString getActiveOButtonStyle();

    static QString getInfoGameResultLabelStyle();
    static QString getVictoryGameResultLabelStyle();
    static QString getLoseGameResultLabelStyle();

    static QString getBlankButtonStyle();
    static QString getCrossNormalStyle();
    static QString getCrossLossStyle();
    static QString getCrossVictoryStyle();
    static QString getZeroNormalStyle();
    static QString getZeroLossStyle();
    static QString getZeroVictoryStyle();
};

#endif // STYLEHELPER_H
