// #include<iostream>
// using namespace std;

// int ans(int arr[],int size,int target){
//     int s = 0;
//     int e = size-1;

// while(s<e){
//         int mid = (s+e)/2;
//         if(arr[mid]==target)
//         {
//             return mid;
//         }
//         else if(arr[mid]<target){
//                 s = mid+1;
//             }
//             else{
//                 e = mid-1;
//             }
        
// }
// return -1;
// }

// int main(){
//     int arr[5] = {11,21,32,55,66};
//    std::cout <<  ans(arr,5,55) << std::endl;
// }

// Recursion approach
#include<iostream>
using namespace std;

int ans(int arr[], int s, int e, int target) {
    if (s >= e) {
        return -1;
    }

    int mid = (s + e) / 2; // Add parentheses here to calculate mid correctly

    if (arr[mid] == target) {
        return mid;
    }

    if (arr[mid] < target) {
       return  ans(arr, mid + 1, e, target); // Add a return statement here
    } else {
      return   ans(arr, s, mid, target); // Add a return statement here
    }
    return -1;
}

int main() {
    int arr[5] = {11, 21, 32, 55, 66};
    std::cout << ans(arr, 0, 5, 55) << std::endl;
}
