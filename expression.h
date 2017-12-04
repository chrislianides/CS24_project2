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

private:
	list* exp;
	

};

#endif
