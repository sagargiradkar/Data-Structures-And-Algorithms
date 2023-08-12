#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter number :";
    cin >> n;

    cout << "BackCount :" ;
    for( i=n ; i>=1 ; i--){
        cout << i <<" ";
    }
    cout << endl;
    return 0;
}