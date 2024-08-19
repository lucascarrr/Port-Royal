# Port-Royal

This is a work in progress; the aim is to develop an implementation for formal concept analysis which can be extended to the results from my current research on introducing non-monotonicity to FCA.

### Currently Working On

- Parser for JSON objects representing formal contexts
- Concept Generating
- Querying Implications
- Introducing partial order and accompanying non-monotonic semantics for rational consequence
- Generating Typical Concepts

### Distant Future

- Visualising concept lattices
- Entailment

| if you have any queries, contact me at crrluc003 [at] myuct.ac.za

## Inputting a Formal Context

A formal context should be input to the program as a JSON file, following the schema below

```
{
  "objects": ["Object1", "Object2", "Object3"],
  "attributes": ["Attribute1", "Attribute2", "Attribute3"],
  "incidenceRelation": {
    "Object1": ["Attribute1", "Attribute2"],
    "Object2": ["Attribute2"],
    "Object3": ["Attribute1", "Attribute3"]
  }
}
```
