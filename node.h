//node.h
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#ifndef NODE_H
#define NODE_H
#include<string>
#include <cstdlib>
#include <iostream>

using namespace std;

enum node_type{EXPRESSION, VARIABLE, INTEGER};
enum operator_type{PLUS, MINUS, MULT, DIVIDE};

union data_type {
    operator_type op;
    char var;
    int val;
};

class Node {

public:
		// Constructor
    Node(char var = 'x');
    Node(operator_type op = PLUS, Node* operand1 = NULL, Node* operand2 = NULL);
    Node(int val = 0);
        // Destructor
    ~Node();
    
        //Mutator
    void setnode_t(node_type type);

    void setdata_op(operator_type x);
    void setdata_var();
    void setdata_val(int x);

    void setoperand1(Node*p);
    void setoperand2(Node*p);

    void setparent(Node*p);

        //accessor
    Node* getoperand1();
    Node* getoperand2();
    Node* getparent();

        //function that print stuff
    string print_infix() const;
    string print_prefix() const;
    string print_postfix() const;

    string int_to_string() const;
    char print_operator() const;

private:
    node_type node_t;
    data_type data;
    Node* operand1;
    Node* operand2;
    Node* parent;

};

#endif