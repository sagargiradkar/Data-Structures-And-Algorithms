#include<iostream>
using namespace std;
int main(){
    cout << "Program of Hollow Ful Pyramid" <<endl;
    int n;
    cout <<"Enter value of n :";
    cin >>n;
    int k=0;
    for(int row=0 ; row<n ;row++){
        for(int col=0 ; col<((2*n)-1) ;col++){
            if(col<n-row-1){
                cout << " ";
            }
            else if(k<2*row+1){
                if(k==0 || k==2*row || row==n-1){
                    cout <<"* ";
                }
                else{
                    cout << " ";
                } 
                k++;
            }
            else{
                cout<<" ";
            }  
            }
            cout <<endl;
    }
}