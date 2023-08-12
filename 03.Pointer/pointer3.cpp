#include<iostream>
using namespace std;

int main(){
    // pointer arithmatics

    int i = 10;

    int *p = &i ;

    cout << p <<endl;
    //it add 4 byte of value 
    p = p+1;
    p++;
    p--;
    cout << p <<endl;

    p = p + 2;

    cout << p <<endl;

    p = p -2;

    cout << p <<endl;

    double d = 1039.434;
    double *dp = &d;
    cout << dp <<endl;
    dp = dp +1;

    cout <<dp <<endl;



}