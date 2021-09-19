#include <gtest/gtest.h>

#include "windowedframe.h"

class Tst_Windowedframe : public testing::Test
{
public:
    void SetUp() override
    {
        m_windowedframe = new WindowedFrame(nullptr);
    }

    void TearDown() override
    {
        delete m_windowedframe;
        m_windowedframe = nullptr;
    }

public:
    WindowedFrame* m_windowedframe;
};

TEST_F(Tst_Windowedframe, windowedframe_test)
{

}
