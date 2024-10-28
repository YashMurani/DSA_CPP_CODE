#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int row = 0 ; row<n; row++){
        for(int col = 0 ;col<n; col++){

            if(row==0&&col==1||row==2&&col==1){
                cout<<" *";
            }
            else{
                // cout<<"_";
            }

            if(row==1&&col==1||row==1&&col==2){
                cout<<"* ";
            }
            

        }
        cout<<endl;
    }
}


// PROUD MOMENT FOR UH BUDDY
