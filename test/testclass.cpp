#include "testclass.h"

TestClass::TestClass(QObject *parent) : QObject(parent)
{

    int i;

    for(i = 0; i < 24; i++)
    {
        _list.append(i);
    }

    return;

}

void TestClass::incrementItem()
{
    for(auto it = _list.begin(); it != _list.end(); it++) {
        (*it)++;
    }

    emit listChanged();
}
