#include<iostream>
using namespace std;
int main(){
    cout << "Program of simple interest " <<endl;

    float principle,rate,time;

    cout << "Enter Principle :";
    cin >> principle;

    cout << "Enter rate of interest :";
    cin >> rate;

    cout << "Enter Time period :";
    cin >> time;

    float simpleInterst;

    simpleInterst = (principle * rate * time) /100;

    cout << "Simple interst is :" << simpleInterst <<endl;

    return 0;

}