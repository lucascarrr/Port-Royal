#include "FormalContext.h"
#include <stdexcept>

FormalContext::FormalContext(const std::vector<std::string>& objects_arg,
                             const std::vector<std::string>& attributes_arg,
                             const std::vector<std::pair<std::string, std::string>>& incidence_relation_args) {
    // Create objects
    for (const auto& obj_name : objects_arg) {
        objects[obj_name] = std::make_shared<Object>(obj_name);
    }

    // Create attributes
    for (const auto& attr_name : attributes_arg) {
        attributes[attr_name] = std::make_shared<Attribute>(attr_name);
    }

    // Process incidence relations
    for (const auto& [object_name, attribute_name] : incidence_relation_args) {
        auto obj_it = objects.find(object_name);
        auto attr_it = attributes.find(attribute_name);

        if (obj_it == objects.end()) {
            throw std::runtime_error("Object not found: " + object_name);
        }
        if (attr_it == attributes.end()) {
            throw std::runtime_error("Attribute not found: " + attribute_name);
        }

        obj_it->second->addAttribute(attr_it->second);
        attr_it->second->addObject(obj_it->second);
    }
}