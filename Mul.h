//
// Created by eti on 12/17/18.
//

#ifndef UNTITLED6_MUL_H
#define UNTITLED6_MUL_H

#include "BinaryExpression.h"

class Mul : public BinaryExpression {
    Expression* left;
    Expression* right;
public:
    Mul(Expression* left, Expression* right);
    virtual double calculate();
};

#endif //UNTITLED6_MUL_H
