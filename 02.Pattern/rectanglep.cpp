//Rectangular pattern
#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cout << "Enter number of rows :";
    cin >> rows;
    cout << "Enter number of col :";
    cin >> col ;
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<col;j++){
            cout<<" *"<<" ";
        }
        cout<<endl;
    }
    return 0;
}