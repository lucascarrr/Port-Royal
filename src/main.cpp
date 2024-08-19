#include <iostream>
#include "Attribute.h"
#include "Object.h"
#include "FormalContext.h"


int main() {
    std::vector<std::string> objectNames = {"apple", "banana", "cherry"};
    std::vector<std::string> attributeNames = {"red", "yellow", "green"};
    std::vector<std::pair<std::string, std::string>> incidenceRelations = {
        {"apple", "red"},
        {"banana", "yellow"},
        {"cherry", "red"},
        {"cherry", "green"}
    };

    // Create a FormalContext instance with the sample data
    FormalContext context(objectNames, attributeNames, incidenceRelations);
    
    return 0;
}
