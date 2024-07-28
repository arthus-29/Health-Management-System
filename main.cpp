// main.cpp

#include "mainwindow.h"
//#include "QTheme.h"
//#include <QWidgets>
#include <QApplication>
#include <QFile>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QFile styleFile("C:\\Users\\DELL\\OneDrive\\Documents\\untitled\\SpyBot.qss"); // Replace ":/path/to/your/style.qss" with the actual path
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    qApp->setStyleSheet(styleSheet);

    MainWindow mainWindow; // Instantiate your main window class
    mainWindow.show(); // Show the main window

    return app.exec(); // Start the application event loop
}
