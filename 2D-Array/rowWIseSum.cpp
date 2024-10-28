#include<iostream>
using namespace std;


void ans(int arr[][3],int row, int col , int k){
    int sum = 0;
    for(int i =0; i<row; i++){
        int sum = 0 ;
        for(int j= 0 ; j<col; j++){
            sum+= arr[i][j];
        }

       std::cout <<"sum of row "<<i<<" is "<< sum << std::endl;
    }

}

int main(){
     int arr[5][3] = {
        {1,2,3},
        {4,5,6},
        {6,7,8},
        {11,21,699},
        {400,546,2}
    };

    // cout<<ans(arr,2,3,10);
   ans(arr,5,3,6) ;
  
}