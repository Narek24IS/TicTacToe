#ifndef STYLEHELPER_H
#define STYLEHELPER_H
#include <QString>

class StyleHelper
{
public:
    static QString getButtonStyle();
    static QString getMainWindowStyle();
    static QString getXButtonStyle();
    static QString getActiveXButtonStyle();
    static QString getOButtonStyle();
    static QString getActiveOButtonStyle();
    static QString getTabWidgetStyle();
    static QString getVictoryGameResultLabelStyle();
    static QString getLossGameResultLabelStyle();

    static QString getBlankButtonStyle();
    static QString getCrossNormalStyle();
    static QString getCrossLossStyle();
    static QString getCrossVictoryStyle();
    static QString getZeroNormalStyle();
    static QString getZeroLossStyle();
    static QString getZeroVictoryStyle();
};

#endif // STYLEHELPER_H
