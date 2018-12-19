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
    map<string, Command> commandMap;
public:
    Command(vector<string> commandsList, map<string, Command> commandMap);
    int execute();
    void doCommand(string Command);
    vector<string> lexer(string str);
    void parser(vector<string> commandsVec);
};
#endif //UNTITLED6_COMMAND_H
