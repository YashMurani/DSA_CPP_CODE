// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int n =5;

int main(){
    for(int row= 0 ; row<n; row++){
        for(int col=0; col<row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}