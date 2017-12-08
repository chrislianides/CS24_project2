//string.cpp
//XiHao Wu and Christopher Lianides
//Perm number: 4338109 and 8899338
#include "string.h"


int main() {


    int a;
    char key = 'Y';
    

    while (key == 'Y')
    {

    cout<<"Please choose your function (1 or 2)"<<endl;
    cout<<"1. Expression Evaluatoin"<<endl;
    cout<<"2. Expression Comparion"<<endl;
    cin>>a;
    cout<<"You have chosen "<<a<<endl;
    cin.ignore(256, '\n');
    cin.clear();


        if (a == 1) {
            cout<<"Please input your infix expression with empty spaces in between each character:"<<endl;
            string s;
            getline(cin, s);

            expression exp(s);
            
            if (exp.evaluate() == -1) { exit(-1) ;}
            cout<<"The result of the expression is:"<<endl;
            cout<<exp.evaluate()<<endl;
        } 

        if (a == 2) {
            cout<<"Please input your first infix expression with empty spaces in between each character:"<<endl;
            string s1;
            getline(cin, s1);
            expression exp1(s1);
            if (exp1.evaluate() == -1) { exit(-1) ;}
            

            cout<<"Please input your second infix expression with empty spaces in between each character:"<<endl;
            string s2;
            getline(cin, s2);
            expression exp2(s2);
            if (exp2.evaluate() == -1) { exit(-1) ;}
        

            cout<<"The result of the comparision is:"<<endl;
            exp1.compare(s1, s2);

        }

        cout<<"Do you want to continue ? (Y/N)"<<endl;
        cin>>key;
      

    }


// These printing functions will work both variable x and any positive integer
// You can try it yourself ^_^

    //print_infix(exp);
    //print_prefix(exp);
    //print_postfix(exp);

	return 0;
}

void print_infix(expression & myexp) {
    cout<<"The infix of the expression is: "<<endl;
    cout<<myexp.infixstring()<<endl;
}

void print_prefix(expression & myexp) {
    cout<<"The prefix of the expression is: "<<endl;
    cout<<myexp.prefixstring()<<endl;
    
}

void print_postfix(expression & myexp) {
    cout<<"The postfix of the expression is: "<<endl;
    cout<<myexp.postfixstring()<<endl;
    
}

