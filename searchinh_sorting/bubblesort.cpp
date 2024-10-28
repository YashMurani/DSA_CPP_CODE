#include<iostream>
using namespace std;


void bubblesort(int arr[], int size){

    int flag = 0;
    for(int i = 0; i<size; i++){
        for(int j = 0 ; j<size ; j++){
            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
                flag = 1;
            }
             if(flag==0)
        break;
        }
        
    }
   
}


void bubblerec(int arr[], int size){
    if(size==1)
    return;

    for(int i = 0 ; i<size-1; i++){
        if(arr[i+1]<arr[i]){
            swap(arr[i+1],arr[i]);
        }
        bubblerec(arr,size-1);
    }
}


int main(){
    int arr[5] = {23,3,1,355,12};

// std::cout << "Before sorting" << endl;;
// for (int i = 0; i < 5; i++)
// {
//     std::cout << arr[i] <<"->";
// }

//     bubblesort(arr, 5);
//     std::cout << endl << std::endl;
//     std::cout << "After sorting" << std::endl;
// for (int i = 0; i < 5; i++)
// {
//     std::cout << arr[i] << "->";
// }


std::cout << "Before sorting" << endl;;
for (int i = 0; i < 5; i++)
{
    std::cout << arr[i] <<"->";
}

    bubblerec(arr, 5);
    std::cout << endl << std::endl;
    std::cout << "After sorting" << std::endl;
for (int i = 0; i < 5; i++)
{
    std::cout << arr[i] << "->";
}
}


// TC- > 0(n^2)
// Best TC 0(N)