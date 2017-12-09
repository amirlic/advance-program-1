//Class creates Driver Object who drives the cab.

#include "Driver.h"

void Driver::setSatisfation(int satisfation) {
    Driver::satisfation = satisfation;
}

void Driver::setCab(const Cab &cab) {
    Driver::cab = cab;
}

Cab Driver::getCab() {
    return this->cab;
}

void Driver::printLocation() {
    printf(this->cab.getLocation());
}

Driver::Driver(int id, int age, int sat, int exp, Cab c, MaritalStatus status) {
    this->id = id;
    this->age = age;
    this->satisfation = sat;
    this->experience = exp;
    this->cab = c;
    this->status = status;
}

Driver::Driver() {}

Driver::~Driver() {

}
