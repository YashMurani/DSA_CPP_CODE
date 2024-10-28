
// Swap All nagative at one sided

#include<iostream>
using namespace std;

void sol(int arr[], int n){
    int j = 0;

    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

}

void print(int arr[], int n){
    for (size_t i = 0; i < n; i++)
    {
     std::cout << arr[i] << std::endl;   
    }
}

int main(){

    int arr[5] = {123,-2,-3,-2,-1};

sol(arr,5);
print(arr,5);



}