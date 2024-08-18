#include "Attribute.h"

Attribute::Attribute(const std::string& name) : name(name) {}

Attribute::~Attribute() {}

const std::string& Attribute::getName() const {
    return name;
}

const std::vector<Object*>& Attribute::getObjects() const {
    return objects;
}

void Attribute::addObject(Object* obj) {
    objects.push_back(obj);
}
