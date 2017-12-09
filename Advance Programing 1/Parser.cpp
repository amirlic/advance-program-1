//the parser class is used to parse the arguments to the grid's size and start and end points

#include <iostream>
#include <stdlib.h>
#include "Parser.h"
#include "stdlib.h"


Parser::Parser(string input) {
    int count = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '_' || input[i] == ',') {
            count++;
            //in[count] += input[i];
        } else {
            this->in[count] += input[i];
        }
    }
    this->rows = atoi((this->in[0]).c_str());
    this->columns = atoi((this->in[1]).c_str());
    this->start = Point(atoi((this->in[2]).c_str()), atoi((this->in[3]).c_str()));
    this->end = Point(atoi((this->in[4]).c_str()), atoi((this->in[5]).c_str()));
}

//check if the next char is a number or not
bool Parser::containTowNum(string s, int *i) {
//    return ((s.at((*i))) != (char) "_" && (s.at((*i))) != (char) ",");
}

int Parser::getRows() {
    return this->rows;
}

int Parser::getColumns() {
    return this->columns;
}

Point Parser::getStart() {
    return this->start;
}

Point Parser::getEnd() {
    return this->end;
}

Parser::~Parser() {

}

Parser::Parser() {

}

void Parser::findRows(int *counter, string input) {

}

void Parser::findColumn(int *counter) {

}

void Parser::findStart(int *counter) {

}

void Parser::findEnd(int *counter) {

}
