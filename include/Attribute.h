// Attribute.h
#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <string>
#include <vector>
#include <memory>

class Object; // Forward declaration

class Attribute {
public:
    Attribute(const std::string& name);
    Attribute(const Attribute& other);
    ~Attribute() = default;

    const std::string& getName() const;
    const std::vector<std::weak_ptr<Object>>& getObjects() const;
    void addObject(std::shared_ptr<Object> obj);

private:
    std::string name;
    std::vector<std::weak_ptr<Object>> objects;
};

#endif // ATTRIBUTE_H