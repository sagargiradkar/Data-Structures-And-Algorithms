#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter number of Rows :";
    cin >> n;
    // cout << "Enter number of col :";
    // cin >>m;
    for(int row = 0 ; row < n ; row ++){
        for(int col = row ; col < n ;col++){
            cout << " *";
        }
        cout << endl;
    }
}