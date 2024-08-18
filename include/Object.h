#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include <vector>
#include "Attribute.h" // Ensure this include is correct

class Attribute; // Forward declaration

class Object {
public:
    Object(const std::string& name);
    ~Object();

    const std::string& getName() const;
    void addAttribute(Attribute* attribute); // Method to add attributes to the object
    const std::vector<Attribute*>& getAttributes() const; // Getter for attributes

private:
    std::string name;
    std::vector<Attribute*> attributes; // Vector to store attribute pointers
};

#endif // OBJECT_H
