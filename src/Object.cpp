#include "Object.h"
#include "Attribute.h"

Object::Object(const std::string& name) : name(name) {}

Object::Object(const Object& other) : name(other.getName()) {
    // Deep copy is not performed for attributes to avoid potential circular references
    // Instead, we'll re-establish these connections in the FormalContext
}

const std::string& Object::getName() const {
    return name;
}

void Object::addAttribute(std::shared_ptr<Attribute> attribute) {
    attributes.push_back(attribute);
}

const std::vector<std::weak_ptr<Attribute>>& Object::getAttributes() const {
    return attributes;
}