#include<iostream>
using namespace std;


    int searchInsert(vector<int>& nums, int target) {

        int previous = 0;

        int s = 0;
        int e = nums.size()-1;

        int mid = (s+e)/2;

        while(s<=e){

        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            e = mid-1;
        }
        if(nums[mid]<target){
            s = mid+1;
        }

        mid = s+e/2;


        }
         return s;

            }
           

    int main(){
        int arr[4] = {1,3,5,6};
        vector<int> v;
        v.push_back(1);
        v.push_back(3);

        v.push_back(5);

        v.push_back(6);


       cout<< searchInsert(v,2);


    }