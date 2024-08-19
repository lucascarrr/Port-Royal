// FormalContext.h
#ifndef FORMAL_CONTEXT_H
#define FORMAL_CONTEXT_H

#include "Object.h"
#include "Attribute.h"
#include <unordered_map>
#include <vector>
#include <string>
#include <utility>
#include <memory>

class FormalContext {
private:
    std::unordered_map<std::string, std::shared_ptr<Object>> objects;
    std::unordered_map<std::string, std::shared_ptr<Attribute>> attributes;
    std::vector<std::pair<std::vector<std::weak_ptr<Object>>, std::vector<std::weak_ptr<Attribute>>>> concepts;

public:
    FormalContext(const std::vector<std::string>& objects_arg,
                  const std::vector<std::string>& attributes_arg,
                  const std::vector<std::pair<std::string, std::string>>& incidence_relation_args);
};

#endif // FORMAL_CONTEXT_H