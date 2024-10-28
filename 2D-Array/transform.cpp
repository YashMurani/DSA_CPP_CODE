#include<iostream>
using namespace std;

void ans(int arr[][3], int row, int col){
    int arrans[col][row];

    // Corrected loop conditions
    for(int i = 0 ; i < row; i++){
        for(int j = 0; j < col; j++){
            arrans[j][i] = arr[i][j];
        }
    }

    // Printing the transposed array
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cout << arrans[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    ans(arr, 2, 3);
    return 0;
}
