//list.h
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#ifndef LIST_H
#define LIST_H
#include "node.h"


class list {

public:
	//constructor
	list(string input);

	//desctructor
	~list();

	//list creator
	void create_list();
	

	//print functions

	string print_infix_list();
	string print_postfix_list();
	string print_prefix_list();


private:
	Node * head;
	Node * current;
	string str;
};


#endif 