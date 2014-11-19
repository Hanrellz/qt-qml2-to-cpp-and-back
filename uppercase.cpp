#include "uppercase.h"

Uppercase::Uppercase(QObject *parent) :
    QObject(parent)
{
}

QString Uppercase::uppercase(const QString &in)
{
    qDebug() << "c++: " << in;
    return in.toUpper();
}
