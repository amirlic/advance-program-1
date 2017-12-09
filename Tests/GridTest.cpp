//
// Created by amirlic on 04/12/16.
//
//Test for Grid
#include <gtest/gtest.h>
#include "GridTest.h"
#include "../Point.h"
#include "../Grid.h"
#include "../Obstacle.h"

TEST(GridTest, isEmptytest) {
    Point p1(1, 1);
    Point p2(1, 0);
    Point obstacle[] = {p1, p2};
    Grid grid(5, 5, obstacle);
    Obstacle obs(obstacle[0]);
    grid.addObj(obs);
    EXPECT_EQ(grid.isEmpty(p1), true);
}

TEST(GridTest, isNotEmptytest) {
    Point p1(1, 1);
    Point p2(1, 0);
    Point obstacle[] = {p1, p2};
    Grid grid(5, 5, obstacle);
    Obstacle obs(obstacle[1]);
    grid.addObj(obs);
    ASSERT_EQ(grid.isEmpty(p1), false);
}