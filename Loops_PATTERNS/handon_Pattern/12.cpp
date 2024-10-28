#include<iostream>
using namespace std;

void ns(int arr[], int size){

    for(int i = 0 ; i<size-2; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]==arr[j]){
                std::cout << "Found the same repeated element is ->" <<arr[i]<< std::endl;
            }
        }
    }
}


int main(){
    int arr[7] = {1,1,2,2,3,3,4};

    ns(arr,7);
}