/**
 * @file pv_test.cpp
 * @brief Unit testing for the primitives module
 *
 */

#include <gtest/gtest.h>

import primitives;

TEST(primitivesPV, makePoint) {
    double x = 1.0;
    double y = 2.0;
    double z = 3.0;
    primitives::Point pnt = primitives::makePoint(x, y, z);
    EXPECT_DOUBLE_EQ(x, pnt[0]);
    EXPECT_DOUBLE_EQ(y, pnt[1]);
    EXPECT_DOUBLE_EQ(z, pnt[2]);
    EXPECT_DOUBLE_EQ(1.0, pnt[3]);
}

TEST(primitivesPV, MakeVector) {
    double x = 3.0;
    double y = 2.0;
    double z = 1.0;
    primitives::Vector vec = primitives::makeVector(x, y, z);
    EXPECT_DOUBLE_EQ(x, vec[0]);
    EXPECT_DOUBLE_EQ(y, vec[1]);
    EXPECT_DOUBLE_EQ(z, vec[2]);
    EXPECT_DOUBLE_EQ(0.0, vec[3]);
}
