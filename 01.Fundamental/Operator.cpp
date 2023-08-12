#include<iostream>
using namespace std;
int main(){

    //Arithmatic Operator
    // + , - , * , / , % 
    int num1,num2;
    
    num1 = 10;
    num2 = 20; 

    cout <<"Sum :"; 
    cout << num1 + num2 <<endl;

    cout << "Sub :";
    cout << num1 - num2 <<endl;

    cout << "Mult :";
    cout << num1 * num2 << endl;
    
    cout << "Div :";
    cout << num1 / num2 << endl;

    cout << "Reminder :";
    cout << num1 % num2 << endl;

    // 2] Relational Operator 
    // > , < ,>= ,<= ,!= , ==

    // int num11 = 4;
    // int num22 = 3;

    cout << (num1>num2) <<endl;

    cout << (num1<num2) <<endl;

    cout << (num1>=num2) <<endl;

    cout << (num1<=num2) <<endl;

    cout << (num1!=num2) <<endl;

    cout << (num1==num2) <<endl;
    
    // 3 Assignment Operator
    // =

    int a = 5 ;
    cout << a <<endl;
    
    // 4] lOGICAL operator 
    // && , || , !
    cout<< (num1>=5 && num2<=7) <<endl;

    cout<< (num1>5 && num2<7) <<endl;

    cout<< (num1!=5 && num2<=7) <<endl;

    cout<< (num1==5 && num2<=7) <<endl;

    cout<< (num1==5 && num2<=7) <<endl;

    cout<< (num1>=5 && num2<=7) <<endl;


    return 0;
    
}