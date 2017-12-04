#Make file for Project 2#

string: string.cpp expression.cpp list.cpp node.cpp
	g++ -o string string.cpp expression.cpp list.cpp node.cpp

clean: 
	rm string                                                              
