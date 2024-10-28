#include<iostream>
using namespace std;
#include<limits.h>

void ans(int arr[], int n){
int z;
int o;
for (size_t i = 0; i < n; i++)
{
 if(arr[i]==0){
    z++;
 }   else{
    o++;
 }

}

 std::cout << "Total zero is " <<z <<std::endl;
 std::cout << "Total one is " <<o<<std::endl; 
}



void  min(int arr[], int size){
    int min = INT_MAX;

    for (size_t i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    std::cout << min << std::endl;
}



// void  max(int arr[], int size){
//     int max = INT_MIN;

//     for (size_t i = 0; i < size; i++)
//     {
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     std::cout << max << std::endl;
// }


void reverse(int arr[], int size){
    int s = 0 ; 
    int e = size-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

   for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}


int max(int arr[], int size){
    int max = 0;

    for (size_t i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

 int main() {

//     int m[3] = {1,2,3};
//     for (size_t i = 0; i < 3; i++)
//     {
//      m[i] = m[i]*2;

//     }


//     for (size_t i = 0; i < 3; i++)
//     {
//         std::cout << m[i] << std::endl;
//     }

// int sum = 0;


//     for (size_t i = 0; i < 3; i++)
//     {
//         sum+=m[i];
//     }

//     std::cout << "THe sum of array is " << sum<<std::endl;


//     for (size_t i = 0; i < 3; i++)
//     {
//         if(m[i]==1){
//             std::cout << "Found" << std::endl;
    //     }else
    //     {
    //         std::cout << "Cant" << std::endl;
    //     }
    // }


// int arr[5] = {0,1,1,0,0};

int arr[5] = {0,2,11,2,111};
// min(arr,5);
// max(arr,5);
reverse(arr,5);

std::cout << "The max element is " << std::endl;
std::cout << max(arr,5) << std::endl;

 
}