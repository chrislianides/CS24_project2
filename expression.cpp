//expression.cpp
#include "expression.h"
#include "Node.h"
#include <iostream>
using namespace std;

expression::expression(Node *Head){
    this->Head=Head=NULL;
}

expression::infixstring(){
    return Head->print_infix();
}

expression::prefixstring(){
    return Head->print_prefix();
}

expression::postfixstring(){
    return Head->print_postfix();
}

