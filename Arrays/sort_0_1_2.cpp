#include<iostream>
using namespace std;
#include<vector>


// void ans(vector<int> v){
//   int  size  = v.size();

//     sort(v.begin(),v.end());

//        for (size_t i = 0; i < size; i++)
//     {
//      std::cout << v[i] << std::endl;   
//     }
// }


void ans(int arr[], int n){

int left = 0;
int right  = n-1;

for (size_t i = 0; i < n; i++)
{
    if(arr[i]==0){
        swap(arr[left], arr[i]);
        left++;
    }

    if(arr[i]==2){
        swap(arr[right], arr[i]);
        right--;
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

    vector<int>v;

    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    // ans(v);


    int arr[3] = {1,2,0};
    ans(arr,3);
    print(arr,3);
   
        

}