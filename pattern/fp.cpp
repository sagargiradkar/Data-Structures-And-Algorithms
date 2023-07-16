 #include<iostream>
 using namespace std;
 int main(){
    cout << "Program of full pyramid "<<endl;
    int n;
    cout << "Enter value of n :";
    cin >>n;
    for(int row=0 ; row<n ; row++){
        //spaces
        for(int col=0 ; col<n-row-1;col++){
            cout << " ";
        }
        //starts
        for(int col=0;col<row+1;col++){
            cout << "* ";
        }
        cout <<endl;

    }
    return 0;
 }