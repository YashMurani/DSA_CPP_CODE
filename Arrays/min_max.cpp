#include<iostream>
using namespace std;


int minElement(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for(int j = i+1; j<size; j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);

            }
        }
    }
    return -1;
}


int main(){
    int arr[5] = {5,4,3,111,0};
    int size  = 5;
    minElement(arr,5);
    std::cout << "Min element is " << arr[0];
    std::cout << "" << std::endl;
    std::cout << "Max element is " <<arr[size-1];
}