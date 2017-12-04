//expression.h
#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <string>
#include <cstdlib>
#include <iostream>


class expression {

public:
    expression(Node *Head);
	string infixstring();
	string prefixstring();
	string postfixstring();
private:
    Node *Head;
};

#endif
