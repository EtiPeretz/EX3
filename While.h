//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_WHILE_H
#define UNTITLED6_WHILE_H

#include "Command.h"

class While : public Command {
public:
    While();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_WHILE_H
