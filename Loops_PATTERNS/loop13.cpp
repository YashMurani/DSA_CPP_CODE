//     1
//    1 2
//   1 2 3
//  1 2 3 4  
// 1 2 3 4 5  



#include<iostream>
using namespace std;

int n = 5;

int main(){
    for(int row = 0 ;row<n; row++){

        for(int col = 0 ; col<n-row; col++){
            cout<<" ";
        }

        for(int col = 0 ; col<row+1; col++){
            std::cout << col+1<<" ";
        }
        cout<<endl;
    }
}