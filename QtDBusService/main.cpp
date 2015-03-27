#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>

#include "dbusservice.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQuickView view;

    DBusService dbusservice;

    view.engine()->rootContext()->setContextProperty("dbusservice", &dbusservice);

    view.setSource(QUrl("qrc:///main.qml"));

    view.show();

    return app.exec();
}
