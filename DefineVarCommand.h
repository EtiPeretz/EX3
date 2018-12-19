//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_DEFIVEVARCOMMAND_H
#define UNTITLED6_DEFIVEVARCOMMAND_H

#include "Command.h"

class DefineVarCommand : public Command {
public:
    DefineVarCommand();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_DEFIVEVARCOMMAND_H
