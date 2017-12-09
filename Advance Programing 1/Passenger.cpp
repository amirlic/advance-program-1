//this class is used to indicate a cab's passenger

#include "Passenger.h"

Point Passenger::getSource() {
    return this->source;
}

Point Passenger::getDestination() {
    return this->destination;
}

int Passenger::giveStisfaction() {
    return 0;
}

Passenger::Passenger(Point s, Point d) {
    this->source = s;
    this->destination = d;
}

Passenger::Passenger() {

}

Passenger::~Passenger() {

}
