//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_SLEEP_H
#define UNTITLED6_SLEEP_H

#include "Command.h"

class Sleep : public Command {
public:
    Sleep();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_SLEEP_H
