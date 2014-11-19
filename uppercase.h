#ifndef UPPERCASE_H
#define UPPERCASE_H

#include <QObject>
#include <QDebug>

class Uppercase : public QObject
{
    Q_OBJECT
public:
    explicit Uppercase(QObject *parent = 0);

signals:

public slots:
    QString uppercase(const QString& in);

};

#endif // UPPERCASE_H
