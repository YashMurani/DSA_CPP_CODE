#include<iostream>
using namespace std;

void ans (int arr[], int size,int index){

if(index>=size){
    return;
}

if(arr[index]%2==0){
    std::cout << arr[index] << std::endl;
}else{

}

ans(arr,size,index+1);
// return 1;
}


int main(){
    int arr[5] = {11, 22, 33, 44, 22};
    int size = 5;
    int index = 0;

    ans(arr, size, index);
    return 0; // You should return an int from the main function.
}