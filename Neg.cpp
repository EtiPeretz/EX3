//
// Created by eti on 12/17/18.
//

#include "Neg.h"

Neg::Neg(Expression *exp) {
    this->expression = exp;
}

double Neg::calculate(){
    return -this->expression->calculate();
}