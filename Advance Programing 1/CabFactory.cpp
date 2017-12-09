//The CabFactory is used to create the specific cab we require at any specific time

#include <cstring>
#include "CabFactory.h"
#include "Standard.h"
#include "Luxury.h"

Cab CabFactory::create(string s) {
    if (strcmp(s, "Standard")) {
        return Standard();
    }
    if (strcmp(s, "Luxury")) {
        return Luxury();
    }
}

CabFactory::~CabFactory() {

}

CabFactory::CabFactory() {

}
