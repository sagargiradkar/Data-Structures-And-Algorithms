#include<iostream>

using namespace std;

int main(){

    cout << "Namaste Bharat" <<endl ;

    int n;
    cout << "Enter a number :" ;
    cin  >> n;
    cout << n <<endl;
    cout << sizeof(n) << endl;

    int a = 5;
    cout << "Value of a is :" << a << endl;
    cout << sizeof(a) << endl;

    char ch = 'a';
    cout << "The Value of a is :" << ch  << endl;
    cout << sizeof(ch) << endl;

    bool flag = true;
    cout << "value of flag is :" << flag << endl;
    cout << sizeof(flag) << endl;
    
    float f = 1.2;
    cout << f << endl;
    cout << sizeof(f) << endl;

    double f1 = 1.28;
    cout << f1 << endl;
    cout << sizeof(f1) <<endl;

    short s = 123;
    cout << s << endl;
    cout << sizeof(s) << endl;

    char ch1 = 253;
    cout << ch1 << endl;
    cout << sizeof(ch1) <<endl;

    char ch2 = 97;
    cout << ch2 <<endl;

    int num = 'b';
    cout << num << endl;

    
    return 0;
}