#ifndef CONCEPT_H
#define CONCEPT_H

#include <vector> 
#include "Object.h"
#include "Attribute.h"

class Concept {
    private: 
        std::vector<Attribute*> concept_intent; 
        std::vector<Object*> concept_extent;

    public: 
        // Constructor if we already have (extent, intent)
        Concept(std::vector<Attribute*> concept_intent_arg, std::vector<Object*> concept_extent_arg); 
        // Constructor for generating concept based on single object
        // Concept(Object* object_source_arge); 
        // // Constructor for generating concept based on single attribute 
        // Concept(Attribute* attribute_source_arge); 

        std::vector<Attribute*> getConceptIntent (); 
        std::vector<Object*> getConceptExtent (); 

};


#endif