#include<iostream>
using namespace std;
int main(){
    int rowCount,colCount;
    cout << "Enter rowCount :";
    cin >> rowCount;
    cout << "Enter colCount :";
    cin >> colCount;
    for(int row=0 ; row<rowCount ; row++){
         if(row == 0 || row == rowCount-1 ){
            for(int col=0 ; col<colCount ; col++){
                cout << "* ";
            }
        }
        else{
            cout << "* ";
            for(int i=0 ; i<colCount-2 ; i++){
                cout << "  ";
            }
            cout << "* ";
        }
        cout <<endl;
        
    }
    return 0;
}