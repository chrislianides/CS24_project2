//expression.h
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "list.h"


class expression {

public:
	expression(string input);
	string infixstring() const;
	string prefixstring() const;
	string postfixstring() const;
	int evaluate(string input) const;
	string compare(string input, string input2) const;
	

private:
	list* exp;
	

};

#endif
