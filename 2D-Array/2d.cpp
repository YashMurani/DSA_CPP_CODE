#include<iostream>
using namespace std;

void printt(int arr[][3],int row,int col){
    for(int i = 0 ; i<row;i++){
        for(int j = 0; j<col; j++){
            std::cout << arr[i][j] << " "<<endl;
        }
    }
}

int main(){
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };


    printt(arr,2,3);
}