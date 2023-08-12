#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout << "Perimeter of a triangle " <<endl;
    cout << "Enter first side :";
    cin >> side1;

    cout << "Enter second side :";
    cin >> side2;

    cout << "Enter third side :";
    cin >> side3;

    int perimeter ;

    perimeter = side1 + side2 + side3 ;

    cout << "The perimeter of traingle is :" << perimeter <<endl;

    return 0;
}