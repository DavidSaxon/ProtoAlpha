#ifndef PROTOALPHA_ALPHA_INTERNAL_QT_WINDOW_HPP_
#define PROTOALPHA_ALPHA_INTERNAL_QT_WINDOW_HPP_

#include <QtGui/QWindow>

class Window : public QWindow
{
    Q_OBJECT

public:

    //--------------------------------------------------------------------------
    //                                CONSTRUCTOR
    //--------------------------------------------------------------------------

    Window();

public slots:

    void renderNow();
};

#endif

