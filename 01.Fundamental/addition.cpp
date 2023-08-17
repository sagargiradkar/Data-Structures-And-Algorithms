#include<iostream>
using namespace std;

int fun(int n){
    return n*(n+1)/2;
}
int fun1(int n){
    int sum = 0;
    for(int i=0 ; i<=n ; i++){
        sum = sum + i;
    }
    return sum;
}
int fun2(int n){
    int sum = 0;
    for(int i=0 ; i<=n ;i++){
        for(int j=0 ; j<i ; j++){
            sum++;
        }
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter the value of N :";
    cin >>n;
    int ans = fun(n);
    cout << "Sum of n natural number :"<<  ans <<endl;
    int ans1 = fun1(n);
    cout << "Sum of n natural number :"<<  ans1 <<endl;
    int ans2 = fun2(n);
    cout << "Sum of n natural number :"<<  ans2 <<endl;
    return 0;
}