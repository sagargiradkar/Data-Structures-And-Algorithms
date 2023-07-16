#include<iostream>
using namespace std;
int main(){
    cout << "Program to check validity of trangle" <<endl;

    int side1,side2,side3;

    cout << "Enter first side :";
    cin >> side1;

    cout << "Enter second side :";
    cin >> side2;

    cout << "Enter third side :";
    cin >> side3;

    if(((side1+side2)>side3) && ((side2+side3)>side1) && ((side1+side3)>side2)){
        cout << "Traingle is valid "<<endl;
    }
    else{
        cout << "Traingle is not valid " <<endl;
    }
    return 0;
}