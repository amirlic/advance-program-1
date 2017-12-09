//
// Created by amirlic on 01/12/16.
//
//Test for Bfs

#include <gtest/gtest.h>
#include "BfsTest.h"
#include "../Bfs.h"

namespace std {

    class BfsTest : public ::testing::Test {
    protected:
        Bfs bfs;
        Point p1;
        Point p2;

        virtual void SetUp() {
            cout << "Setting up" << endl;
        }

        virtual void TearDown() {
            cout << "Tearing down" << endl;
        }

    public:
        BfsTest() : bfs(3, 3), p1(3, 3), p2(11, 11) {}
    };

    TEST_F(BfsTest, inArraytest) {
        Road curr1(p1);
        Road curr2(p2);
        EXPECT_EQ(bfs.inArray(curr1), true);
        EXPECT_EQ(bfs.inArray(curr2), false);
    }

    TEST_F(BfsTest, routetest) {
        queue<Road> p;
        Point p3(0, 1);
        Point p4(0, 2);
        Point p5(1, 2);
        Point p6(2, 2);
        p1.setPoint(0, 0);
        p2.setPoint(2, 2);
        Road curr1(p1);
        Road curr3(p3);
        Road curr4(p4);
        Road curr5(p5);
        Road curr6(p6);
        p.push(curr6);
        p.push(curr5);
        p.push(curr4);
        p.push(curr3);
        p.push(curr1);
        queue<Road> r;
        int flag = 0;
        r = bfs.route(p1, p2);
        for (int i = 0; i < p.size(); i++) {
            if (r.front() != p.front()) {
                flag = 1;
            }
            r.pop();
            p.pop();
        }
        EXPECT_EQ(0, flag);
    }

    TEST_F(BfsTest, routetest2) {
        queue<Road> p;
        Point p3(0, 1);
        Point p4(0, 2);
        Point p5(1, 2);
        Point p6(2, 2);
        p1.setPoint(0, 0);
        p2.setPoint(11, 11);
        Road curr1(p1);
        Road curr3(p3);
        Road curr4(p4);
        Road curr5(p5);
        Road curr6(p6);
        p.push(curr6);
        p.push(curr5);
        p.push(curr4);
        p.push(curr3);
        p.push(curr1);
        queue<Road> r;
        int flag = 0;
        r = bfs.route(p1, p2);
        for (int i = 0; i < p.size(); i++) {
            if (r.front() != p.front()) {
                flag = 1;
            }
            r.pop();
            p.pop();
        }
        EXPECT_EQ(1, flag);
    }
}