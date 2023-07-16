#include<iostream>
using namespace std;
int main(){
    cout << "Program of prime numeber "<<endl;
    int n;
    cout << "Enter a number :";
    cin >> n;
    int flag = 0;
    for(int i=2 ; i<n ;i++){
        if(n%i==0){
            cout << "Not a prime"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
         cout << "prime number " <<endl;
    }
    return 0;
}