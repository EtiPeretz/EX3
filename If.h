//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_IF_H
#define UNTITLED6_IF_H

class If : public Command {
public:
    If();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_IF_H
