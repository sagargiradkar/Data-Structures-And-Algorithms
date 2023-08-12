#include<iostream>
using namespace std;
int main(){
    cout << "Program of facrorial "<<endl;
    int n;
    cout << "Enter Number :";
    cin >>n;

    int fact;

    fact =1;

    while(n>=1){
        fact = fact * n;
        n--;
    }
    cout <<"Factorial :" <<fact<< endl;

    return 0;


}