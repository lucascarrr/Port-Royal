#include "Object.h"

Object::Object(const std::string& name) : name(name) {}

Object::~Object() {}

const std::string& Object::getName() const {
    return name;
}

void Object::addAttribute(Attribute* attribute) {
    attributes.push_back(attribute);
}

const std::vector<Attribute*>& Object::getAttributes() const {
    return attributes;
}
