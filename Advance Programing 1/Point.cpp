//Point class is used to describe the node's position
#include <iostream>
#include "Point.h"

using namespace std;

int Point::getX() const {
    return this->xCoor;
}

int Point::getY() const {
    return this->yCoor;
}

void Point::setPoint(int xCoor, int yCoor) {
    this->xCoor = xCoor;
    this->yCoor = yCoor;
}

Point::Point() {
    this->xCoor = 0;
    this->yCoor = 0;
}

Point::Point(int xCoor, int yCoor) {
    this->xCoor = xCoor;
    this->yCoor = yCoor;
}

void Point::toSTRING() {
    cout << "(" << this->getX() << "," << this->getY() << ")" << std::endl;
}

void Point::increaseX() {
    this->xCoor = this->getX() + 1;
}

void Point::increaseY() {
    this->yCoor = this->getY() + 1;
}

Point Point::operator+(Point &other) {
    this->setPoint(this->getX() + other.getX(), this->getY() + other.getY());
}

bool Point::equals(Point other) {
    if (this->getX() == other.getX() && this->getY() == other.getY()) {
        return true;
    }
    return false;
}

Point::~Point() {

}
