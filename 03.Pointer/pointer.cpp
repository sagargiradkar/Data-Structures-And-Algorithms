#include<iostream>
using namespace std;

int main(){
    int i;
    i = 10;
    cout << &i <<endl;

    cout << *(&i) <<endl;

    //to create a pointer 

    int *p = &i;

    cout << p <<endl;

    float f = 10.2;

    float * pf = &f;

    double d = 122.434;

    double *dp = &d;

    cout << pf <<endl;

    cout << dp <<endl;

    //dereferencing operator
    cout << *(dp) <<endl;

    cout << *(pf) <<endl;



    int j = 10;
    int *q = &j;

    cout << sizeof(q) <<endl;

    cout << *(q) <<endl;

    j++;

    cout << j <<endl;
    cout << *q <<endl;

    int a = j;
    a++;
    cout << a <<endl;
    *q++;
    a = *q;

    a++;
    cout << a <<endl;

    return 0;
}