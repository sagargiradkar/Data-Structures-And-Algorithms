#include<iostream>
using namespace std;
int sum(int *a,int size){
    int abs = 0;
    for(int i=0 ; i < size ;i++){
        abs+= a[i];
    }
    return abs;
    cout << sizeof(a) <<endl;
    return 0;
}
int main(){

    int a[10];
    cout << sizeof(a) <<endl;
    cout << sum(a,10) <<endl;
    cout << sum(a + 3,7) <<endl;
}