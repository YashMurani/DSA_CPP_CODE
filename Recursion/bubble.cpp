#include<iostream>
using namespace std;

// Normal bubble sort
// void sort(int arr[], int size){
//     for(int  i = 0 ; i<size-1;i++){
//             for(int j = i+1; j<size; j++){
//                 if(arr[j]<arr[i]){
//                     swap(arr[i],arr[j]);
//                 }
//             }

//     }
// }


// Bubble recursion sort

void bubble(int arr[], int size){
    if(size==0){
        return;
    }

    for(int  i = 0 ; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

         bubble( arr,  size-1);
    }
}





int main(){
    int arr[5] = {111,22,31,5,444};
    int size = 5;
    bubble(arr,5);


    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}




