#include<iostream>
using namespace std;


int main(){
    int n = 5;

    for(int row = 0 ; row<n; row++){
        // for space
        for(int col = 0 ; col<n-row; col++){
            cout<<" ";
        }

        for(int col = 0 ; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}