//the parser class is used to parse the arguments to the grid's size and start and end points

#ifndef EX1_PARSER_H
#define EX1_PARSER_H

#include "Point.h"
#include "string"

class Parser {
private:
    Point start;
    Point end;
    int rows;
    int columns;
public:
    string in[6];

    Parser(string input);

    Parser();

    Point getStart();

    Point getEnd();

    int getRows();

    int getColumns();

    bool containTowNum(string s, int *i);

    void findRows(int *counter, string input);

    void findColumn(int *counter);

    void findStart(int *counter);

    void findEnd(int *counter);

    virtual ~Parser();
};


#endif //EX1_PARSER_H
