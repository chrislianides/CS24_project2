//string.cpp
//XiHao Wu and Christopher Lianides
//Perm Number: 4338109 and 8899338
#include "string.h"


int main() {


	
	cout<<"Please enter the fully parenthesized expression with empty spaces"<<endl;
	string str;
	getline(cin, str);
	
	expression ex(str);

    print_infix(ex);
    print_prefix(ex);
    print_postfix(ex);

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

