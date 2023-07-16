#include<iostream>
using namespace std;
int main(){
    cout << "Programm to count even number "<<endl;

    int n;
    cout <<"Enter number :";
    cin >> n;
    cout << "Even number :";
    for(int i=0 ; i<=n ; i++){
        if(i%2==0){
            cout << i <<" ";
        }
    }
    cout << endl;
}