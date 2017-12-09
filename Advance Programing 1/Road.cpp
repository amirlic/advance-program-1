//Road class is used to check for the node's father and at any given time whether we already have been to that node
//or not

#include "Road.h"

Point Road::getFather() {
    return this->father;
}

Road::Road(Point location) {
    this->haveBeen = false;
    this->location = location;
}

Road::Road(Point location, Point father) {
    this->father = father;
    this->haveBeen = false;
    this->location = location;
}

bool Road::getHaveBeen() {
    return this->haveBeen;
}

Point Road::getLocation() {
    return this->location;
}

void Road::setFather(Point father) {
    this->father = father;
}

void Road::setHaveBeen(bool haveBeen) {
    this->haveBeen = haveBeen;
}

void Road::setLocation(Point location) {
    this->location = location;
}

bool Road::operator==(Road &other) {
    return (this->getLocation().equals(other.getLocation()));
}

bool Road::operator!=(Road &other) {
    return !(this->getLocation().equals(other.getLocation()));
}

int Road::getX() {
    return this->getLocation().getX();
}

int Road::getY() {
    return this->getLocation().getY();
}

Road::~Road() {

}
