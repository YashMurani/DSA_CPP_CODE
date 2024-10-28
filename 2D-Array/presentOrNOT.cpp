#include<iostream>
using namespace std;


bool ans(int arr[][3],int row, int col , int k){
    for(int i =0; i<row; i++){
        for(int j= 0 ; j<col; j++){
            if(arr[i][j]==k){
                return true;
            }
        }
    }
    return false;
}

int main(){
     int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    // cout<<ans(arr,2,3,10);
    bool a = ans(arr,2,3,6) ;
    if(a==1){
        std::cout << "Yes present" << std::endl;
    }else{
        std::cout << "Not present" << std::endl;
    }
}