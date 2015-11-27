#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>

class TestClass : public QObject
{
    Q_OBJECT

    QList<int> _list;

    Q_PROPERTY(QList<int> list READ list WRITE setList NOTIFY listChanged)

public:
    explicit TestClass(QObject *parent = 0);

    QList<int> list() { return _list; }
    void setList(QList<int> list) { _list = list; }

signals:
    void listChanged();

public slots:
    void incrementItem();
};

#endif // TESTCLASS_H
