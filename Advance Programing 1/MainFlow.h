//this class runs the flow of the program

#ifndef UNTITLED1_MAINFLOW_H
#define UNTITLED1_MAINFLOW_H


#include "TaxiCenter.h"
#include "Statistic.h"
#include "Parser.h"

class MainFlow {
private:
    TaxiCenter center;
    Statistic statistic;
    Parser par;
public:
    void start(string s);
    MainFlow();

    virtual ~MainFlow();
};


#endif //UNTITLED1_MAINFLOW_H
