//
// Created by eti on 12/17/18.
//

#ifndef UNTITLED6_DIV_H
#define UNTITLED6_DIV_H

#include "BinaryExpression.h"

class Div : public BinaryExpression {
    Expression* left;
    Expression* right;
public:
    Div(Expression* left, Expression* right);
    virtual double calculate();
};
#endif //UNTITLED6_DIV_H
