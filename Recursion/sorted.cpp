#include<iostream>
using namespace std;


bool sol(int arr[], int n, int index){
    if(index>=n){
        return true;
    }

    if(arr[index]>arr[index-1]){
       bool ans =  sol(arr,n,index+1);
       return ans;
    }else{
        return false;
    }

    // return false;

}

int main(){
    int arr[5] = {1,2,3,4,22};
    cout<<sol(arr,5,1);
    }