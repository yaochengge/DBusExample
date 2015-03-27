#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>

#include "dbusclient.h"
#include "dbuswatcher.h"

#ifdef HAS_BOOSTER
#include <MDeclarativeCache>
#endif

#if defined(HAS_BOOSTER)
Q_DECL_EXPORT
#endif
int main(int argc, char *argv[])
{
#ifdef HAS_BOOSTER
    QScopedPointer<QGuiApplication> app(MDeclarativeCache::qApplication(argc, argv));
    QScopedPointer<QQuickView> view(MDeclarativeCache::qQuickView());
#else
    QGuiApplication app(argc, argv);
    QQuickView view;
#endif

    DBusClient dbusclient;
    DBusWatcher dbuswatcher;

#ifdef HAS_BOOSTER


    view->engine()->rootContext()->setContextProperty("dbusclient", &dbusclient);
    view->engine()->rootContext()->setContextProperty("dbuswatcher", &dbuswatcher);

    view->setSource(QUrl("qrc:///main.qml"));

    view->show();

    return app->exec();
#else
    view.engine()->rootContext()->setContextProperty("dbusclient", &dbusclient);
    view.engine()->rootContext()->setContextProperty("dbuswatcher", &dbuswatcher);

    view.setSource(QUrl("qrc:///main.qml"));

    view.show();

    return app.exec();
#endif
}
