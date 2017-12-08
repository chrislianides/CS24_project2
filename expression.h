//expression.h
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "list.h"



class expression {

public:
	expression(string input);
	string infixstring() ;
	string prefixstring() ;
	string postfixstring() ;
	int evaluate();
	void compare(string input1, string input2);

private:
	list* exp;
	int result;
	string infix;
	

};


#endif