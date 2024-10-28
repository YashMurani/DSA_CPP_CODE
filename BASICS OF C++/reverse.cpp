#include <iostream>
using namespace std;

void reversearray(int arr[], int size){
  int start =arr[0];
  int end = arr[size-2];

  while(start<end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void print(int arr[], int size){
  for(int i= 0 ; i<size; i++){
    cout<<arr[i]<<endl;
  }
}

int main() {
  
  int marks[5] = {100,20,21,33,11};
  reversearray(marks,5);
  print(marks,5);

}