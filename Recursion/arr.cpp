#include<iostream>
using namespace std;


void reverse(int arr[],  int s, int e){

    //Base case
    if(s>=e){
        return;
    }

    swap(arr[s++],arr[e--]);
    reverse(arr,s,e);

}

int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr,0,4);


    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}