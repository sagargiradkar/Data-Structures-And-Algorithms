#include<iostream>
using namespace std;
int coutDigit(int m){
    int n = m;
    int rem = 0;
    while(n > 0){
        n = n/10;
        rem++;
    }
    return rem;
}
int main(){
    int x = 0;
    cout << "Enter the numbers :";
    cin >> x;
    int ans = 0;
    ans = coutDigit(x);
    cout << "The number of digits are :" << ans <<endl;
    return 0;
}