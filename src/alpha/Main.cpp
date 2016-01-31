#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main( int argc, char* argv[] )
{
    // TODO: move and use fake args
    QApplication app( argc, argv );

    QLabel* window = new QLabel( "Hello World" );
    window->show();

    return QApplication::exec();
}
