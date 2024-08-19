#include "Attribute.h"
#include "Object.h"

Attribute::Attribute(const std::string& name) : name(name) {}

Attribute::Attribute(const Attribute& other) : name(other.getName()) {
    // Deep copy is not performed for objects to avoid potential circular references
    // Instead, we'll re-establish these connections in the FormalContext
}

const std::string& Attribute::getName() const {
    return name;
}

const std::vector<std::weak_ptr<Object>>& Attribute::getObjects() const {
    return objects;
}

void Attribute::addObject(std::shared_ptr<Object> obj) {
    objects.push_back(obj);
}
