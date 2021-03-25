//
// Created by trykr on 19.03.2021.
//

#ifndef CSVTOPOSTGRE_PARSER_H
#define CSVTOPOSTGRE_PARSER_H
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "iostream"
#include <codecvt>
#include <locale>
enum class Type
{
    number = 0,
    string
};

class Column
{
private:
    Type type;
    std::string name;
public:
    explicit Column(std::string name);
    ~Column();
    void setType(Type type);
    std::string getName() const;
    Type getType() const;
};

class Parser
{
public:
    Parser(std::string& name);
    ~Parser();
    void generateScrypt();
private:
    std::string name;
    std::list<Column> structure;
    std::vector<std::string>* table;

    void setColumns(std::string& s);
    void setLine(std::string& s);
    void setLineAndDefineStructure(std::string& s);
};


#endif //CSVTOPOSTGRE_PARSER_H
