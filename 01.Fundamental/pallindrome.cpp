#include<iostream>
using namespace std;
bool pallindrome(int n){
    int rev = 0;
    int temp = n;
    while(temp != 0){
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp/10;
    }
    return (rev == n);
}
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    bool ans = pallindrome(n);
    if(ans == 0){
        cout << "The given number is not pallindrome "<< endl;
    }
    else{
        cout << "The given number is pallindrome "<< endl;
    }

    return 0;
   

}