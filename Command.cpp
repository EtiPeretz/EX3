//
// Created by eti on 12/18/18.
//

#include "Command.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>

#define ERRORCOMMAND "error - command not found\n"
#define ERRORFILE "error - file not found\n"

using namespace std;

Command::Command(vector<string> commandsList, map<string, Command> commandsMap) {
    this->commandsList = commandsList;
    this->commandsMap = commandsMap;
}

vector<string> Command::lexer(string str) {
    string word;
    int size = str.size();
    int line1 = 0;
    string line = "L";
    for(int i = 0; i < size; i++) {
        if(str[i] != '\0') {
            //when it is not whitespace
            while(isspace(str[i]) == 0) {
                word.push_back(str[i]);
                i++;
            }
            if (str[i] == ' ') {
                i++;
            }
            this->commandsList.push_back(word);
            word = " ";
            if (str[i] == '\n') {
                line1++;
                this->commandsList.push_back(line);
            }
            //this->commandsList.push_back(word);
            //word = "";
        }
    }
    return commandsList;
}

void Command::parser(vector<string> commandsVec) {
    //this->commandsMap = {"connect", };
}