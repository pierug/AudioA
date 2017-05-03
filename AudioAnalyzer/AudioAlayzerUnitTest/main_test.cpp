#include <QString>
#include <QtTest>

class AudioAlayzerUnitTest : public QObject
{
    Q_OBJECT

public:
    AudioAlayzerUnitTest();

private Q_SLOTS:
    void testCase1();
};

AudioAlayzerUnitTest::AudioAlayzerUnitTest()
{
}

void AudioAlayzerUnitTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(AudioAlayzerUnitTest)

#include "main_test.moc"
