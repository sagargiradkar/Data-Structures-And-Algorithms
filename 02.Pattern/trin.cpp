#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter value of n:";
    cin >> n;

    for(int row = 0 ; row<n;row++){
        for(int col=0 ;col<row+1;col++){
            cout <<row+1;
            //not last character
            if(col!=row){
                cout << "*";
            }
        }
        cout <<endl;
    }


    for(int row = 0 ; row<n;row++){
        for(int col=0 ;col<n-row;col++){
            cout <<n-row;
            //not last character
            if(col!=n-row-1){
                cout << "*";
            }
        }
        cout <<endl;
    }
    return 0;
}