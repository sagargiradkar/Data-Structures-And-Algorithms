#include<iostream>
using namespace std;
int main(){
    const int i = 20;

    //  i = 100;
    int j = 12;
     
   const int &k = j;

    //k++;
    j++;

    cout << k <<endl;
    
}