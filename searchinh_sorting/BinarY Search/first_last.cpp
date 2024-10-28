#include<iostream>
using namespace std;


int firstOcc(int arr[], int size, int target){

int first  = -1;
int start = 0;
int end = size-1;

while(start<=end){
    int mid = (start+end)/2;

    if(arr[mid]==target){
        first = mid;
        end = mid-1; 
    }
    else if(arr[mid]<target){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
}

return first;


}


int lastocc(int arr[], int size, int target){

int last  = -1;
int start = 0;
int end = size-1;

while(start<=end){
    int mid = (start+end)/2;

    if(arr[mid]==target){
        last = mid;
        start = mid+1; 
    }
    else if(arr[mid]<target){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
}

return last;


}



int main(){
    int arr[5] = {0,1,1,1,3};
    int q = 5;

   cout<< firstOcc(arr,q,1);
   std::cout << "" << std::endl;
   std::cout << lastocc(arr,q,1) << std::endl;

      
}