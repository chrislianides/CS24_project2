//node.cpp
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#include "node.h"

	// Constructor
Node::Node(char variable){data.var = variable;}

Node::Node(operator_type op, Node* operand1, Node* operand2)
{
	this->data.op = op;
	this->operand1 = operand1;
	this->operand2 = operand2;
}
Node::Node(int val) {data.val = val;}

	// Destructor
Node::~Node(){
	if (operand1 != NULL)
    delete operand1;
    delete operand2;
}

	//Mutator
void Node::setnode_t(node_type type) {node_t = type;}

void Node::setdata_op(operator_type x) {data.op = x;}
void Node::setdata_var() {data.var = 'x';}
void Node::setdata_val(int x) {data.val = x;}

void Node::setoperand1(Node*p) {operand1 = p;}
void Node::setoperand2(Node*p) {operand2 = p;}

void Node::setparent(Node*p) {parent = p;}

	//Accessor
Node* Node::getparent() {return parent;}
Node* Node::getoperand1() {return operand1;}
Node* Node::getoperand2() {return operand2;}

	//Print Funtions
string Node::print_infix() const{
	string str = "";
	if (node_t == VARIABLE) {
		return "x";
	} else if (node_t == INTEGER) {
		return int_to_string();
	} else {
		str += "(";
		str += operand1->print_infix();
		str += print_operator(); 
		str += operand2->print_infix();
		str += ")";
	}
return str;
}

string Node::print_prefix() const{
	string str = "";

	if (node_t == VARIABLE) {
		return "x";
	} else if (node_t == INTEGER) {
	
		return int_to_string();
	} else {
		str += print_operator();
		str += operand1->print_prefix();
		str += operand2->print_prefix();
	}
	return str;
}


string Node::print_postfix() const{
	string str = "";

	if (node_t == VARIABLE) {
		return "x";
	} else if (node_t == INTEGER) {
		return int_to_string();
	} else {
		str += operand1->print_postfix();
		str += operand2->print_postfix();
		str += print_operator();
	}
return str;

}

string Node::int_to_string() const {
	
 	int a = data.val;
 
    string str = std::to_string(a);
	
	return str;
}
char Node::print_operator() const {
	
	if (data.op == PLUS) {return '+';}
	else if (data.op == MINUS) {return '-';}
	else if (data.op == MULT) {return '*';}
	else if (data.op == DIVIDE) {return '/';}
	else return 'x';
}
