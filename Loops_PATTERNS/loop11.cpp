// *****
// *   *
// *   *
// *****

// row = 5
// 1 = *****
// 2 = *   *
// 3 = *   *
// 4 = *****

#include<iostream>
using namespace std;

int main(){
    
    for(int row = 0 ; row<4; row++){
        for(int col = 0 ; col<5 ; col++){
            if(row==0 || row==3){
                std::cout << "*" ;
            }
            else{
                if(col==0||col==4){
                    std::cout << "*" ;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

}