//
// Created by eti on 12/17/18.
//

#ifndef UNTITLED6_UNARYEXPRESSION_H
#define UNTITLED6_UNARYEXPRESSION_H

#include "Expression.h"

class UnaryExpression : public Expression {
    Expression* expression;
public:
    UnaryExpression(Expression* exp);
    UnaryExpression() {};
    virtual double calculate() = 0;
};
#endif //UNTITLED6_UNARYEXPRESSION_H
