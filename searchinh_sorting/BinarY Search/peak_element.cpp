#include<iostream>
using namespace std;


int ans(int arr[], int size){
    int s = 0 ;
    int e = size-1;





    while(s<=e){
        int mid = (s+e)/2;

       
            if(arr[mid-1]<arr[mid]&&arr[mid+1]<arr[mid]){
                return mid;
                
        }
        else if(arr[mid]<arr[mid]-1){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    return -1;
}


int main(){
    int arr[6] = {1,2,3,4,5,6};
  cout<<  ans(arr,5);
}
