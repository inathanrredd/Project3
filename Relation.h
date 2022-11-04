//
// Created by nathan on 10/21/22.
//

#ifndef PROJECT_0_MAIN_RELATION_H
#define PROJECT_0_MAIN_RELATION_H
#include "Tuple.h"
#include "Header.h"
#include <iostream>
#include <set>
#include <map>

class Relation {
private:
    std::string name;
    Header* columnNames;
    std::set<Tuple> tuples;

public:
    Relation();
    Relation(std::string str, Header* columnNames);
    ~Relation();
    std::string GetName();
    void AddTuple(Tuple newTuple);
    std::string toString();
    void select1(int columnIndex, std::string value, Relation rel);
    void select2(int columnIndex1, int columnIndex2, Relation rel);
    void project(std::vector<int> columnsToProject, Relation rel);
    void rename(std::vector<std::string> newColumnNames);
    Header* getColumnNames();
    std::set<Tuple> getTuples();
    void clearTuples();
    void setColumnNames(Header* cols);
};


#endif //PROJECT_0_MAIN_RELATION_H
