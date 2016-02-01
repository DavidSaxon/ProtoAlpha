#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

#include "alpha/internal/qt/Window.hpp"

int main( int argc, char* argv[] )
{
    // TODO: move and use fake args
    QApplication app( argc, argv );

    // QLabel* window = new QLabel( "Hello World" );
    Window* window = new Window();
    window->show();

    return QApplication::exec();
}
