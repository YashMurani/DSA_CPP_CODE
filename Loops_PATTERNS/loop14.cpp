// 1 2 3 4 5
//  1 2 3 4 
//   1 2 3
//    1 2
//     1

// 1-> 1 2 3 4 5 space 0
// 2-> 1 2 3 4  space 1
// 3-> 1 2 3  space 2
// 4-> 1 2  space 3
// 4-> 1 space 4


#include<iostream>
using namespace std;

int main(){

int n =5;
for(int row =0; row<n; row++){


    for(int col = 0; col<row ; col++){
        cout<<" ";
    }

  for  (int col =0; col<n-row; col++){
    cout<<col+1<<" ";
    }

    cout<<endl;
}

}