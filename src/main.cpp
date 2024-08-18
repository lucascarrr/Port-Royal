#include <iostream>
#include "Attribute.h"
#include "Object.h"

int main() {
    // Create attributes
    Attribute color("Color");
    Attribute size("Size");

    // Create objects
    Object apple("Apple");
    Object banana("Banana");
    Object pear("Pear");

    // Add attributes to objects
    apple.addAttribute(&color);
    banana.addAttribute(&color);
    pear.addAttribute(&color);

    // Add objects to attributes
    color.addObject(&apple);
    color.addObject(&banana);
    color.addObject(&pear);

    apple.addAttribute(&size);
    size.addObject(&apple);

    std::cout << "Attributes with object 'Apple':" << std::endl;
    for (Attribute* atr : apple.getAttributes()) {
        std::cout << " - " << atr->getName() << std::endl;
    }

    // Print objects that have the "Color" attribute
    std::cout << "Objects which have 'Color': " << std::endl;
    for (Object* obj : color.getObjects()) {
        std::cout << " - " << obj->getName() << std::endl;
    }

    return 0;
}
