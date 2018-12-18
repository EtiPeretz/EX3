//
// Created by eti on 12/17/18.
//

#ifndef UNTITLED6_NEG_H
#define UNTITLED6_NEG_H

#include "UnaryExpression.h"

class Neg : public UnaryExpression {
    Expression* expression;
public:
    Neg(Expression* exp);
    virtual double calculate();
};
#endif //UNTITLED6_NEG_H
