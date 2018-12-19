//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_PRINT_H
#define UNTITLED6_PRINT_H

#include "Command.h"

class Print : public Command {
public:
    Print();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_PRINT_H
