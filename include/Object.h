// Object.h
#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include <vector>
#include <memory>

class Attribute; // Forward declaration

class Object {
public:
    Object(const std::string& name);
    Object(const Object& other);
    ~Object() = default;

    const std::string& getName() const;
    void addAttribute(std::shared_ptr<Attribute> attribute);
    const std::vector<std::weak_ptr<Attribute>>& getAttributes() const;

private:
    std::string name;
    std::vector<std::weak_ptr<Attribute>> attributes;
};

#endif // OBJECT_H