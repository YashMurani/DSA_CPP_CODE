// 1
// 12
// 123
// 1234
// 12345

// row = 5
// 1st = 1
// 2nd = 1 2
// 3rd = 1 2 3
// 4th = 1 2 3 4 
// 5th = 1 2 3 4 5

#include<iostream>
using namespace std;

int n = 5;

int main(){
    for(int row = 0 ;row<n; row++){

        

        for(int col = 0 ; col<row+1; col++){
            std::cout << col+1;
        }
        cout<<endl;
    }
}