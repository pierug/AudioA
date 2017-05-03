#include <QtTest/QtTest>
#include "wavefiletest.h"

int main()
{
    WaveFileTest waveFileTest;
    QTest::qExec(&waveFileTest);

    return 0;
}
