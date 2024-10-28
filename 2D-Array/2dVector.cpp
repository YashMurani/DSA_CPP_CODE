// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> v(5);
//     std::cout << v.size() << std::endl;

//     vector<vector <int> > arr(5, vector<int>(10,0));

//     for(int i =0; i<arr.size(); i++){
//         for(int j = 0 ; j<arr[i].size();j++){
//             std::cout << arr[i][j] << " ";
//         }
//         std::cout << "" << std::endl;
//     }




#include<iostream>
using namespace std;
int main(){
    int arr[2][2] = {
        {1,2},
        {3,4}
    };


    for(int i = 0 ; i<2; i++){
        for(int j= 0 ; j<2; j++){
            std::cout << arr[j][i] << " ";
        }
        std::cout << " " << std::endl;
    }
}