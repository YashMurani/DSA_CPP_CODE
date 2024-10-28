#include<iostream>
using namespace std;

int search(int arr[], int n,int target){
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,2,3,4,4};
    std::cout << search(arr,5,3);
}