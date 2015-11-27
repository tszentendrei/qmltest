#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTimer>
#include "testclass.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    TestClass tc;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("tc", &tc);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QTimer::singleShot(2000, &tc, SLOT(incrementItem()));

    return app.exec();
}

