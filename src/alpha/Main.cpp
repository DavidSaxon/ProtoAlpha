// TODO: REMOVE ME
#include <iostream>

#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

#include <chaoscore/base/uni/UTF8String.hpp>

#include "alpha/internal/qt/Window.hpp"

int main(int argc, char* argv[])
{
    chaos::uni::UTF8String pls("!!");

    std::cout << pls << std::endl;

    // TODO: move and use fake args
    QApplication app(argc, argv);

    // QLabel* window = new QLabel( "Hello World" );
    Window* window = new Window();
    window->show();

    return QApplication::exec();
}
