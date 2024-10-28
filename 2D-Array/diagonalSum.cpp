#include<iostream>
using namespace std;

void ans(int arr[][3],int row,int col){
     int sum = 0 ;
    for(int i = 0 ; i<row;i++){
        // sum+=arr[i][i];
std::cout << arr[i][i] << std::endl;
    }

    // return sum;
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {1,1,1}
    };

  ans(arr,3,3);
//   int a = ans(arr,3,3);

}