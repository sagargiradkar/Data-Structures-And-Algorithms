#include<iostream>
using namespace std;

int main(){
    cout << "Program to find max number "<<endl;

    int num1,num2,num3;

    cout << "Enter first number :";
    cin >>num1;

    cout << "Enter second number :";
    cin >>num2;

    cout << "Enter third number :";
    cin >>num3;

    if((num1 > num2) && (num1 > num3) ){
        cout << num1 << " is greter than "<< num2 << " and "<<num3 <<endl;
    }
    else if((num2 > num3) && (num2 > num1)){
                cout << num2 <<  " is greter than "<< num1 << " and "<<num3 <<endl;
    }
    else{
        cout << num3 << " is greter than "<< num1 << " and "<<num2 <<endl;
    }
    return 0;
}