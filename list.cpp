//list.cpp
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#include "list.h"

//constructor
list::list(string input) {
	head = NULL;
	str = input;
}

//destructor
list::~list() {
	delete head;
}

//print functions

string list::print_postfix_list() {
	return head->print_postfix();
}
string list::print_prefix_list() {
	return head->print_prefix();
}

string list::print_infix_list() {
	return head->print_infix();
}


//list creator
void list::create_list() {

	head = new Node(PLUS,NULL,NULL);
	head->setparent(head);
	head->setnode_t(EXPRESSION);
	current = head;

	for(int i = 1; i<str.length(); i++) {
		//if the cursor is pointing to the left parenthsis again
		if (str[i] == '(') {
			Node *p = new Node(PLUS,NULL,NULL);
			p->setparent(current);
			p->setnode_t(EXPRESSION);

			if (current->getoperand1() == NULL) {
				current->setoperand1(p);
			} else {
				current->setoperand2(p);
			}
			current = p;
			
		// if the cursor is pointing to the operator
		} else if (str[i] == '+') {
			current->setdata_op(PLUS);
		} else if (str[i] == '-') {
			current->setdata_op(MINUS);
		} else if (str[i] == '*') {
			current->setdata_op(MULT);
		} else if (str[i] == '/') {
			current->setdata_op(DIVIDE);

		// if the cursor is pointing to the variabe
		} else if (str[i] == 'x') {
			Node* p = new Node('x');
			p->setnode_t(VARIABLE);
			if (current->getoperand1() == NULL) {
				current->setoperand1(p);
			} else {
				current->setoperand2(p);
			}
 			

		// if the cursor is pointing to the constant
		} else if (isdigit(str[i])) {

			int num = 0; 

			while(i<str.length() && isdigit(str[i])) {
				num = (num*10) + (str[i] - '0'); 
				i++;
			}
			i--;

			Node* p = new Node(num);
			p->setnode_t(INTEGER);
			if (current->getoperand1() == NULL) {
				current->setoperand1(p);
			} else {
				current->setoperand2(p);
			}

		// if the cursor is pointing to the right parenthesis
		} else if (str[i] == ')') {
			current = current->getparent();
		}
			    
	}

}