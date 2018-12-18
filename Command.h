//
// Created by eti on 12/13/18.
//

#include <stdio.h>
#include <map.h>

#ifndef UNTITLED6_COMMAND_H
#define UNTITLED6_COMMAND_H

class Command {
    map<double,double> symbolTable;
public:
    int execute(string );
    doCommand(string[] arrOfStrings);
    string[] lexer();
    parser();
};
#endif //UNTITLED6_COMMAND_H
