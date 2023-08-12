#include<iostream>
using namespace std;
int main(){
    //declare a integer variable
    /*
    int marks;
    cout << "Enter Marks :";
    cin >> marks ;
    if(marks >= 40)
        cout << "Pass " << endl;
    else
    cout << "Fail" << endl;
    */
   
   int marks ;
   cin >> marks;
    /*
   if(marks>=90){
    cout << "A grade "<<endl;
   }
   else{
    if(marks>=80){
        cout << "B grade" <<endl;
    }
    else{
        cout << "C grade" << endl;
        if(marks>=40){
            cout << "D grade " <<endl;
        }
        else{
            cout << "E grade" <<endl;
        }
    }
   }
    */
    //if-elseif-else

    if(marks>=90){
        cout << "A";
    }
    else if(marks>=80){
        cout << "B";
    }
    else if(marks>=60){
        cout <<"C";
    }
    else if(marks>=40){
        cout << "D";
    }
    else{
        cout << "E";
    }
    cout << endl;


    int noOfBro;

    cout <<"Enter Number Of brother :";
    cin >> noOfBro;
    if(noOfBro == 0){
        cout << "Bat Ban Jayegi "<< endl;
    }
    else{
        cout << "Bat Nahi Banegi " <<endl;
    }
    return 0;
}