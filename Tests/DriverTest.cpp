//
// Created by amirlic on 02/12/16.
//
//Test for Driver
#include <gtest/gtest.h>
#include "DriverTest.h"
#include "../Driver.h"
#include "../Standard.h"
#include "../Luxury.h"

class DriverTest : public ::testing::Test {
protected:
    Driver driver;
    int id;
    int age;
    Cab cab;
    MaritalStatus status;
    int satisfation;
    int experience;

    virtual void SetUp() {
        cout << "Setting up" << endl;
        id = 123456;
        age = 30;
        satisfation = 12;
        experience = 12;
    }

    virtual void TearDown() {
        cout << "Tearing down" << endl;
    }

public:

};

TEST_F(DriverTest, standardtest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    Driver d(234567, 100, 100, 80, cab, MaritalStatus::Married);
    Cab c = d.getCab();
    EXPECT_EQ(c.getCabId(), cab.getCabId());
}

TEST_F(DriverTest, luxurytest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Luxury cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    Driver d(234567, 100, 100, 80, cab, MaritalStatus::Married);
    Cab c = d.getCab();
    EXPECT_EQ(c.getCabId(), cab.getCabId());
}