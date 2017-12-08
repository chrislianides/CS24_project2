//expression.cpp
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#include "expression.h"
#include <stack>

expression::expression(string inputlist) {
	exp = new list(inputlist);
	exp->create_list();
	
} 

string expression::infixstring(){
    return exp->print_infix_list();

}

string expression::prefixstring() {
    return exp->print_prefix_list();
}

string expression::postfixstring() {
    return exp->print_postfix_list();
}




bool IsOperator(char C)
{
	if(C == '+' || C == '-' || C == '*' || C == '/') {
		return true;
	}
	return false;
}


int PerformOperation(char operation, int operand1, int operand2)
{
	if(operation == '+') return operand1 +operand2;
	else if(operation == '-') return operand1 - operand2;
	else if(operation == '*') return operand1 * operand2;
	else if(operation == '/') return operand1 / operand2;

	else cout<<"error in performing operation"<<endl;
	return -1; 
}

int expression::evaluate() {

	string expression = exp->print_postfix_list();
	infix = exp->print_infix_list();

	stack<int> stack;

	for(int i = 0; i < expression.length(); i++) {
	
		if(IsOperator(expression[i])) {
			
			int operand2 = stack.top(); 
			stack.pop();
			int operand1 = stack.top(); 
			stack.pop();
			
			int result = PerformOperation(expression[i], operand1, operand2);

			stack.push(result);
		}
		else if(isdigit(expression[i])){ 
			int operand = 0; 

			while(i<expression.length() && isdigit(expression[i])) {
				operand = (operand*10) + (expression[i] - '0'); 
				i++;
			}
			i--;

			stack.push(operand);
		} else if (expression[i] == 'x'){
			cout<<"ERROR: Your Expression Contains Variable X !"<<endl;
			cout<<exp->print_infix_list()<<endl;
			return -1;
		}
	}

	result = stack.top();
	
	return result;
}

void expression::compare(string input1, string input2) {
	expression exp1(input1);
	expression exp2(input2);
	
	if (exp1.evaluate() == exp2.evaluate()){
		cout<<exp1.infixstring()<<" = "<<exp2.infixstring()<<endl;
} else if (exp1.evaluate() > exp2.evaluate()) {
		cout<<exp1.infixstring()<<" > "<<exp2.infixstring()<<endl;
} else if (exp1.evaluate() < exp2.evaluate()) {
		cout<<exp1.infixstring()<<" < "<<exp2.infixstring()<<endl;
} else {
	cout<<"error in comparision"<<endl;
}
}




