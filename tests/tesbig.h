#ifndef TESBIG_H
#define TESBIG_H

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(myfuncTest, poloz) {
    float x1, x2;
    float a = 1, b = 4, c = 3;
    ASSERT_EQ(myfunc(a, b, c, &x1, &x2), 4);
    ASSERT_EQ(x1, -1);
    ASSERT_EQ(x2, -3);
}

TEST(myfunc2Test, znac) {
    float x1, x2;
    float a = 1, b = 3, c = 0;
    ASSERT_EQ(myfunc(a, b, c, &x1, &x2), 4);
    ASSERT_EQ(x1, 0);
    ASSERT_EQ(x2, -3);
}

TEST(test_nul, strr) {
    float a = 9, b = -6, c = 2;
    float x1, x2;
    ASSERT_EQ(myfunc(a, b, c, &x1, &x2), 6);
}

TEST(ts_one, nul) {
    float x1, x2;
    float a = 1, b = 4, c = 4;
    ASSERT_EQ(myfunc(a, b, c, &x1, &x2), 5);
    ASSERT_EQ(x1, -2);
}

TEST(test_na, stra) {
    float a = 0, b = -6, c = 2;
    float x1, x2;
    ASSERT_EQ(myfunc(a, b, c, &x1, &x2), 1);
}

TEST(test_nb, strb) {
    float a = 1, b = 0, c = 6;
    float x1, x2;
    ASSERT_EQ(myfunc(a, b, c, &x1, &x2), 2);
}

#endif // TESBIG_H
