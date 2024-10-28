#include <iostream>
using namespace std;

// Selection sort
void selectionsort(int arr[], int start, int end){
int i = start-1;
for(int i = 0 ; i<end-1; i++){
  int min = i;
  for(int j = start; j<end;j++){
    if(arr[j]<arr[min]);
    min = j;   
}
swap(arr[min],arr[i]);
}
}

// Bubbble sort
void bubblesort(int arr[], int size){
  int flag = 0 ;
  for(int i = 0; i<size-1; i++){
    for(int j= i +1; j<size; j++){
      if(arr[j]<arr[i])
      swap(arr[i],arr[j]);
      flag =1;
    }
      if(flag==0) break;
  }

}

//Helper for the Quick sort
int partition(int arr[],int start,int end){

  int i = start-1;
  int pivot = arr[end];

  for(int j = start; j<end; j++){
    if(arr[j]<pivot){
      swap(arr[i+1],j);
    }
  }
  swap(arr[i+1],end);

  return arr[i+1];

}
//Quick sort
void quick(int arr[], int start, int end){
  int pivot;
  if(start<end){
     pivot = partition(arr,start,end);
  }

  partition(arr,start,pivot);
  partition(arr,pivot+1,end);


}

//Helper for Mergearry
void mergearray(int arr[], int start,int end,int mid){
  int leftsize = mid-start+1;
  int rightsize = end-mid;

  int *leftarr = new int[leftsize];
  int *rightarr = new int[rightsize];

  for(int i = 0 ; i<leftsize;i++){
    leftarr[i] = arr[start+i];
  }

  for(int i = 0 ; i<rightsize; i++){
    rightarr[i] = arr[mid+i+1];
  }

  int i = 0 ;
  int j = 0;
  int k = start;

  while(i<leftsize&&j<rightsize){
    if(leftarr[i]<rightarr[j]){
      arr[k++] = leftarr[i++];
    }
    else{
      arr[k++] = rightarr[j++];
    }
  }

  while(i<leftsize){
    arr[k++] = leftarr[i++];
  }

  while(j<rightsize){
    arr[k++] = rightarr[j++];
  }

    // Release memory to avoid memory leaks
    delete[] leftarr;
    delete[] rightarr;
}
//MErge sort
void mergesort(int arr[], int start,int end){
  if(start>=end)
  return;

  int mid = (start+end)/2;
  mergesort(arr,start,mid);
  mergesort(arr,mid+1,end);

  mergearray(arr,start,end,mid);



}

int main() {

  cout<<"Hello world";
  int arr[5] = {5,4,3,2,1};
  selectionsort(arr,0,5);


  for(int i =0; i<=5; i++){
    cout<<arr[i]<<endl;
  }



  // int arr[5] = {5,4,3,2,1};
  // bubblesort(arr,5);
  // for(int i =0; i<5; i++){
  //   cout<<arr[i]<<endl;
  // }


//   int arr[5] = {5,4,3,2,1};
// quick(arr,0,5);
// for(int i =0; i<5; i++){
//     cout<<arr[i]<<endl;
//   }

//   int arr[5] = {5,4,3,2,1};

//   mergesort(arr,0,4);
// for(int i =0; i<5; i++){
//     cout<<arr[i]<<endl;
//   }

    return 0;
}