//
// Created by eti on 12/17/18.
//

#ifndef UNTITLED6_BINARYEXPRESSION_H
#define UNTITLED6_BINARYEXPRESSION_H

#include "Expression.h"

class BinaryExpression : public Expression {
    Expression* left;
    Expression* right;
public:
    BinaryExpression(Expression* left, Expression* right);
    BinaryExpression() {};
    virtual double calculate() = 0;
};
#endif //UNTITLED6_BINARYEXPRESSION_H
