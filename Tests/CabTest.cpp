//
// Created by amirlic on 29/11/16.
//
//Test for Cab
#include <stack>
#include "CabTest.h"
#include "gtest/gtest.h"
#include "../Cab.h"
#include "../Standard.h"
#include "../Road.h"
#include "../Luxury.h"

TEST(CabTest, IdTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    int id = cab.getCabId();
    EXPECT_EQ(id, 111111111);
}

TEST(CabTest, KmTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    double km = cab.getNumOfKm();
    EXPECT_EQ(km, 0.0);
}

TEST(CabTest, tariffTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    double tariff = cab.getTariff();
    EXPECT_EQ(tariff, 3.0);
}

TEST(CabTest, locationTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    Point location = cab.getLocation();
    EXPECT_EQ(location.getX(), 0);
    EXPECT_EQ(location.getY(), 0);
}

TEST(CabTest, canMoveTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    bool canMove = cab.canMove();
    EXPECT_EQ(canMove, false);
}

TEST(CabTest, TripTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Standard cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    Trip trip = cab.getTrip();
    EXPECT_EQ(trip.getStart().getX(), t.getStart().getX());
    EXPECT_EQ(trip.getStart().getY(), t.getStart().getY());
    EXPECT_EQ(trip.getEnd().getX(), t.getStart().getX());
    EXPECT_EQ(trip.getEnd().getY(), t.getStart().getY());
}

TEST(CabTest, IdLuxuryTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Luxury cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    int id = cab.getCabId();
    EXPECT_EQ(id, 11111111);
}

TEST(CabTest, KmLuxuryTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Luxury cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    double km = cab.getNumOfKm();
    EXPECT_EQ(km, 0.0);
}

TEST(CabTest, tariffLuxuryTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Luxury cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    double tariff = cab.getTariff();
    EXPECT_EQ(tariff, 3.0);
}

TEST(CabTest, locationLuxuryTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Luxury cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    Point location = cab.getLocation();
}

TEST(CabTest, canMoveLuxuryTest) {
    Point p(0, 0);
    Point dest(2, 2);
    list <Passenger> passengers;
    stack<Road> maslul;
    Trip t(123, passengers, p, dest, 3.0, 2.0, maslul);
    Luxury cab(234567, 11111111, t, p, Blue, Honda, 2.0, 3.0);
    bool canMove = cab.canMove();
    EXPECT_EQ(canMove, false);
}