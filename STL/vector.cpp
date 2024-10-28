#include<iostream>
using namespace std;
#include<vector>

int main(){


    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


   int  size = v.size();

    for (size_t i = 0; i < size; i++)
    {
        std::cout << v[i] << std::endl;
    }

    // v.pop_back();
    // v.pop_back();
    std::cout << "After using the pop function vector is something like this" << std::endl;


     cout << "Front element: " << v[0] << endl;
  cout << "Front element: " << v.front() << endl;
  cout << "End Element: " << v[v.size() - 1] << endl;
  cout << "End Element: " << v.back() << endl;

    std::cout << "" << std::endl;
  std::cout << "All ABOUT ARR2 NOW" << std::endl;

   vector<int>arr; // default with no data, 0 size
  vector<int>arr2(5, -1); // init with n size with specific data
 arr2.push_back(50);
 
 int size2 = arr2.size();


  for (size_t i = 0; i < size2; i++)
    {
        std::cout << arr2[i] << std::endl;
    }

}