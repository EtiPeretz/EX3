//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_OPEVSEVERCOMMAND_H
#define UNTITLED6_OPEVSEVERCOMMAND_H

#include "Command.h"

class OpenServerCommand : public Command {
public:
    OpenServerCommand();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_OPEVSEVERCOMMAND_H
