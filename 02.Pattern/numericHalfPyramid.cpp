#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Emter number of rows :";
    cin >> n;
    for(int row=0 ; row<n ;row++){
        for(int col=0 ; col<row+1 ; col++){
            cout << col+1 << " ";
        }
        cout << endl;
    }
    return 0;
}