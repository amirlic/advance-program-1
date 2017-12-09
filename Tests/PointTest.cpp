//
// Created by amirlic on 29/11/16.
//
//Test for Point
#include "PointTest.h"
#include "gtest/gtest.h"
#include "../Point.h"

TEST(PointTest, increaseYtest) {
    Point p1(0, 0);
    Point p2(0, 1);
    p1.increaseY();
    EXPECT_EQ(p1.getY(), p2.getY());
}

TEST(PointTest, increaseXtest) {
    Point p1(0, 0);
    Point p2(1, 0);
    p1.increaseX();
    EXPECT_EQ(p1.getX(), p2.getX());
}

TEST(PointTest, setPointtest) {
    Point p1(0, 0);
    Point p2(1, 1);
    p2.setPoint(0, 0);
    EXPECT_EQ(p1.getX(), p2.getX());
    EXPECT_EQ(p1.getY(), p2.getY());
}

TEST(PointTest, operatorPlustest) {
    Point p1(3, 3);
    Point p3(0, 0);
    p3 + p1;
    EXPECT_EQ(p3.getX(), 3);
    EXPECT_EQ(p3.getY(), 3);
}

TEST(PointTest, operatorEqualstest) {
    Point p1(0, 0);
    Point p3(0, 0);
    int x = p3.equals(p1);
    EXPECT_EQ(x, 1);
}