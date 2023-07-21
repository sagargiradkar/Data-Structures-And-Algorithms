#include<iostream>
using namespace std;
int main(){
     cout << "Program of full pyramid "<<endl;
    int n;
    cout << "Enter value of n :";
    cin >>n;
    //Halp upride pyramid
    for(int row=0 ; row<n ; row++){
        //spaces
        for(int col=0 ; col<n-row-1;col++){
            cout << " ";
        }
        //starts
        for(int col=0;col<row+1;col++){
            cout << "* ";
        }
        cout <<endl;

    }
    //Inverted pyramid
    for(int row=0 ; row<n ;row++){
        for(int col=0 ; col<row; col++){
            cout << " ";
        }

        for(int col=0 ;col<n-row;col++){
            cout << "* ";
        }
        cout <<endl;
    }
    return 0;
    
}