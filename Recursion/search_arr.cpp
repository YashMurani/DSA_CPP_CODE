#include<iostream>
using namespace std;

bool find(int arr[], int target , int size, int index){
    if(arr[index]>=size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }

  find(arr,  target,  size,  index+1);
//    return ans;
    return false;

}


int main(){

    int arr[5] = {1,2,3,4,5};
    int target = 1;
    int size = 5;
    int index = 0;
    cout<<find(arr,target,size,index);

}