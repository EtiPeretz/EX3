//
// Created by eti on 12/13/18.
//
#include "stdio.h"
#include <vector>
#include <list>
#include <string>
#include <map>

#ifndef UNTITLED6_COMMAND_H
#define UNTITLED6_COMMAND_H

using namespace std;

class Command {
    vector<string> commandsList;
    map<string, Command> commandsMap;
public:
    Command(vector<string> commandsList, map<string, Command> commandsMap);
    int execute(string );
    //doCommand(string[] arrOfStrings);
    vector<string> lexer(string str);
    void parser(vector<string> commandsVec);
};
#endif //UNTITLED6_COMMAND_H
