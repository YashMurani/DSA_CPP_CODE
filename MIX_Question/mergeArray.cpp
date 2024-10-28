#include<iostream>
using namespace std;


void merge(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3){

    int k = 0 ;
    for(int i = 0 ; i<n1; i++){
        arr3[k++] = arr1[i];
    }


    for(int i = 0 ; i<n2; i++){
        arr3[k++] = arr2[i];
    }

    for (int i = 0; i < n3; i++)
    {
        std::cout << arr3[i] << std::endl;
    }

    



}


int main(){
    int arr1[2] = {1,2};
    int arr2[2] = {43,2};
    int arr[4];

    merge(arr1,2,arr2,2,arr,4);
}