// first occurence of element

#include<iostream>
using namespace std;


void sol(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = (s+e)/2;

    if(arr[mid]==target){
        ans = mid;
        int e = mid-1;
        std::cout << arr[mid] << std::endl;
    }

    if(arr[mid]>target){
        s = mid+1;
    }
    if(arr[mid]<target){
        e = mid-1;
    }

    mid = (s+e)/2;
}

int main(){
    int arr[5]= {1,1,2,3,4};
    sol(arr,5,1);
}