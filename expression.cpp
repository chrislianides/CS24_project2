//expression.cpp
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#include "expression.h"

expression::expression(string inputlist) {
	exp = new list(inputlist);
	exp->create_list();
	
} 

string expression::infixstring() const {
    return exp->print_infix_list();

}

string expression::prefixstring() const {
    return exp->print_prefix_list();
}

string expression::postfixstring() const {
    return exp->print_postfix_list();
}
