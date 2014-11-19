#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "uppercase.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    Uppercase uppercase;

    engine.rootContext()->setContextProperty("_uppercase", &uppercase);

    return app.exec();
}
