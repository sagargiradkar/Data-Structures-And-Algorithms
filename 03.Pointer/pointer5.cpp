#include<iostream>
using namespace std;

int main(){

    char str[] = "abcde";
   // char *pstr = "abcdef";

    cout << str <<endl;
    //cout << pstr <<endl;
    int a[] = {1,345,45,45};
    char b[] ="abcde";

    cout << a <<endl;
    cout << b <<endl;

    char *c = &b[0];
    cout << c <<endl;

    c = &b[1];
    cout << c <<endl;

    c = &b[2];
    cout << c <<endl;

    char *pc = c;
    cout << pc <<endl;
}