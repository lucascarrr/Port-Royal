#include "Concept.h"

Concept::Concept(std::vector<Attribute *> concept_intent_arg, std::vector<Object *> concept_extent_arg)
    : concept_intent(concept_intent_arg), concept_extent(concept_extent_arg)
{
}
/* we need to define move constructor for these, then you generate the intent/extent and then create the concept*/
// Concept::Concept(Object *object_source_arge)
// {

// }

// Concept::Concept(Attribute *attribute_source_arge)
// {
// }

std::vector<Attribute *> Concept::getConceptIntent()
{
    return std::vector<Attribute *>();
}

std::vector<Object *> Concept::getConceptExtent()
{
    return std::vector<Object *>();
}
