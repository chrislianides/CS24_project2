//string.cpp
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#include "string.h"


int main() {

	cout<<"Please enter a fully parenthesized expression with each character separated by empty spaces"<<endl;

	string s;

	getline(cin, s);

	cout<<"--------------------------------"<<endl;

	expression exp(s);

    print_infix(exp);
    print_prefix(exp);
    print_postfix(exp);

	return 0;
}

void print_infix(const expression & myexp) {
    cout<<"The infix of the expression is: "<<endl;
    cout<<myexp.infixstring()<<endl;
}

void print_prefix(const expression & myexp) {
    cout<<"The prefix of the expression is: "<<endl;
    cout<<myexp.prefixstring()<<endl;
}

void print_postfix(const expression & myexp) {
    cout<<"The postfix of the expression is: "<<endl;
    cout<<myexp.postfixstring()<<endl;
}
