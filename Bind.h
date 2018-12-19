//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_BIND_H
#define UNTITLED6_BIND_H

#include "Command.h"

class Bind : public Command {

public:
    Bind();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_BIND_H
