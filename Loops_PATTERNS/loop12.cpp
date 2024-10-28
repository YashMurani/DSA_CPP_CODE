//       *
//      * *
//     * * *
//    * * * *
//   * * * * *

// row = 5 
// 1 = space = 4 star = 1
// 2 = space = 3 star = 2
// 3 = space = 2 star = 3
// 4 = space = 1 star = 4
// 5 = space = 0 star = 5


#include<iostream>
using namespace std;

int main(){
    int n = 5;
    

    for(int row = 0; row<n; row++){

        // for spacing
        for(int col= 0; col<n-row-1; col++){
            cout<<" ";
        }

        for(int col = 0; col<row+1; col++){
            cout<<" *";
        }
        cout<<endl;
    }
}