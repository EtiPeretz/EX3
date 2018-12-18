//
// Created by eti on 12/17/18.
//

#ifndef UNTITLED6_MINUS_H
#define UNTITLED6_MINUS_H

#include "BinaryExpression.h"

class Minus : public BinaryExpression {
    Expression* left;
    Expression* right;
public:
    Minus(Expression* left, Expression* right);
    virtual double calculate();
};
#endif //UNTITLED6_MINUS_H
