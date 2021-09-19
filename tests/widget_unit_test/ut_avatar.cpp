#include "avatar.h"

#include <QApplication>
#include <QWheelEvent>
#include <QSignalSpy>
#include <QTest>

#include <gtest/gtest.h>

class Tst_Avatar : public testing::Test
{
public:
    void SetUp() override
    {
        m_widget = new Avatar;
    }

    void TearDown() override
    {
        if (m_widget) {
            delete m_widget;
            m_widget = nullptr;
        }
    }

public:
    Avatar *m_widget;
};

TEST_F(Tst_Avatar, avatar_test)
{
    QMouseEvent event(QEvent::MouseButtonRelease, QPointF(0, 0), QPointF(0, 1), QPointF(1, 1), Qt::LeftButton, Qt::LeftButton, Qt::NoModifier);
    QApplication::sendEvent(m_widget, &event);

    QTest::qWait(10);

    QSignalSpy spy(m_widget, SIGNAL(clicked()));
    QCOMPARE(spy.count(), 1);

    QPaintEvent event1(QRect(0, 0, 32, 32));
    QApplication::sendEvent(m_widget, &event1);
}
