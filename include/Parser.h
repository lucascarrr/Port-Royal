#ifndef PARSER_H 
#define PARSER_H 
#include <fstream>
#include <nlohmann/json.hpp>

class Parser {
    private:
    public:         
        static void parseFromFile(const std::string& filePath);

};

#endif