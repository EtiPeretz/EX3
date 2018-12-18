//
// Created by eti on 12/17/18.
//

#ifndef UNTITLED6_PLUS_H
#define UNTITLED6_PLUS_H

#include "BinaryExpression.h"

class Plus : public BinaryExpression {
    Expression* left;
    Expression* right;
public:
    Plus(Expression* left, Expression* right);
    virtual double calculate();
};

#endif //UNTITLED6_PLUS_H
