//
// Created by eti on 12/18/18.
//

#include "Command.h"
#include "DefineVarCommand.h"
#include "ConnectCommand.h"
#include "OpenServerCommand.h"
#include "Bind.h"
#include "Sleep.h"
#include "If.h"
#include "Print.h"
#include "While.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>

#define ERRORCOMMAND "error - command not found\n"
#define ERRORFILE "error - file not found\n"

using namespace std;

Command::Command(vector<string> commandsList, map<string, Command> commandMap) {
    this->commandsList = commandsList;
    this->commandMap = commandMap;
}

vector<string> Command::lexer(string str) {
    string word;
    int size = str.size();
    int line1 = 0;
    string line = "L";
    for (int i = 0; i < size; i++) {
        if (str[i] != '\0') {
            //when it is not whitespace
            while (isspace(str[i]) == 0) {
                word.push_back(str[i]);
                i++;
            }
            this->commandsList.push_back(word);
            word = "";
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
    //insert all the commands to commands map
    this->commandMap = {{"openDataServer", new OpenServerCommand()},
                        {"connect", new ConnectCommand()},
                        {"var", new DefineVarCommand()},
                        {"bind", new Bind()},
                        {"while", new While()},
                        {"if", new If()},
                        {"print", new Print()},
                        {"sleep", new Sleep()}};
    //for every cell in the vector
    for (int i = 0; i < commandsVec.size(); i++) {
        //find the command in map
        auto search = this->commandMap.find(commandsVec[i]);
        //if we did not get to end and you have found the command
        if (search != this->commandMap.end()) {
            //how much cells we need to read for the specific command
            int cellsToRead = (commandsVec[i]).size();
            vector<string> relevantCells;
            //save the relevant cells
            for (int j = 1; j <= cellsToRead; cellsToRead++) {
                relevantCells.push_back(commandsVec[i][i + j]);
            }
            //execute the command send the relevant cells to execute function
            this->commandMap.find(commandsVec[i][0])->second.doCommand(relevantCells);
            cout << "Found " << search->first << '\n';
            i = i + cellsToRead;
            //if we didn't find the command
        } else {
            std::cout << ERRORCOMMAND;
        }
    }
}