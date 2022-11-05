/**
 * @file pv_test.cpp
 * @brief Unit testing for the Point/Vector wrapper class
 * @date 2022-10-26
 *
 */

#include <gtest/gtest.h>

import primitives;

TEST(PVTest, makePoint) {
    double x = 1.0;
    double y = 2.0;
    double z = 3.0;
    double w = 1.0;
    primitives::Point pnt = primitives::makePoint(x, y, z);
    //EXPECT_EQ(pnt[0], x);
    //EXPECT_EQ(pnt[1], y);
    //EXPECT_EQ(pnt[2], z);
    //EXPECT_EQ(pnt[3], w);
}
