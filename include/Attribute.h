#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <vector>
#include <string>
#include "Object.h"

class Object; // Forward declaration

class Attribute {
public:
    Attribute(const std::string& name);
    ~Attribute();

    const std::string& getName() const;
    const std::vector<Object*>& getObjects() const;
    void addObject(Object* obj);

private:
    std::string name;
    std::vector<Object*> objects;
};

#endif // ATTRIBUTE_H
