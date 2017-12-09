//
// Created by amirlic on 05/12/16.
//
//Test for TaxiCenter

#include <gtest/gtest.h>
#include <list>
#include <stack>
#include "TaxiCentrTest.h"
#include "../Point.h"
#include "../Passenger.h"
#include "../Road.h"
#include "../Trip.h"
#include "../Standard.h"
#include "../Bfs.h"
#include "../Map.h"
#include "../Driver.h"
#include "../TaxiCenter.h"

class TaxiCenterTest : public ::testing::Test {
protected:
    Driver drivers[];
    Cab cabs[];
    list <Trip> trips;
    Map map;
    Bfs bfs;

    virtual void SetUp() {
        cout << "Setting up" << endl;
    }

    virtual void TearDown() {
        cout << "Tearing down" << endl;
    }

public:

};

TEST_F(TaxiCenterTest, conectTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    Driver driver = Driver();
    driver.setCab(cab);
    EXPECT_EQ(driver.getCab().getCabId(), 234567);
}

TEST_F(TaxiCenterTest, callTest) {
    TaxiCenter center = TaxiCenter();
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    Driver driver = Driver();
    Cab standard = center.getCall(t);
    EXPECT_EQ(standard.getTrip().getStart().getX(), t.getStart().getX());
    EXPECT_EQ(standard.getTrip().getStart().getY(), t.getStart().getY());
    EXPECT_EQ(standard.getTrip().getEnd().getX(), t.getEnd().getX());
    EXPECT_EQ(standard.getTrip().getEnd().getY(), t.getEnd().getY());
}