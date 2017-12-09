//Class Cab is used as an interface for standard and luxury cabs

#include "Cab.h"

int Cab::getCabId() {
    return 0;
}

Point Cab::getLocation() {
    return Point(0, 0);
}

Trip Cab::getTrip() {
    return Trip();
}

double Cab::getTariff() {
    return 0;
}

double Cab::getNumOfKm() {
    return 0;
}

bool Cab::canMove() {
    return false;
}

void Cab::setTrip(Trip t) {

}

void Cab::move(Point *p) {

}

int Cab::getId() {
    return 0;
}

std::string Cab::getColor() {
    return "blue";
}

std::string Cab::getKind() {
    return "Pink";
}

Cab::~Cab() {

}
