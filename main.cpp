#include "loginwindow.h"
#include "welcomewindow.h"
#include "registerwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;

     w.show();

    return a.exec();
}
