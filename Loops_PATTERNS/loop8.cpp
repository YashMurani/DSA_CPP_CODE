// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2 
// 1

// row 5
// 1st-> 1 2 3 4 5 
// 2nd-> 1 2 3 4
// 3rd-> 1 2 3
// 4th-> 1 2
// 5th-> 1

#include<iostream>
using namespace std;

int n = 5;

int main(){
    for(int row = 0; row<5; row++){
        for(int col = 0 ; col<n-row; col++){
            std::cout << col+1;
        }
        cout<<endl;
    }
}