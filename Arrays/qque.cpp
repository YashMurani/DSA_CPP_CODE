
#include <iostream>
using namespace std;

void answer(int arr[] , int size)
{
    int z_count=0;
    int o_count=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == 0)
        {
            z_count++;
        }
        else
        {
          o_count++;  
        }
    }
    // cout<<z_count<<o_count<<endl;
    
    int k=0;
    while(z_count > 0)
    {
       
        arr[k] = 0;
        z_count--;
         k++;
        
    }
    while(o_count > 0)
    {
       
        arr[k] = 1;
        o_count--;
         k++;
        
    }
}
int main() {
    // Write C++ code here
    int arr[6]={0,1,0,1,0,1};
    answer(arr,6);
    for(int j=0; j<6; j++)
    {
        cout<<arr[j];
    }

    return 0;
}