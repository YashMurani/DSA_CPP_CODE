#include<iostream>
using namespace std;

void sol(int arr[], int n){
    int s = 0 ;
    int e = n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[5] = {11,12,33,444,5};
    sol(arr,5);

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}