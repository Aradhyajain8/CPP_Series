#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // transpose
    // for(int i =0; i<3;i++){
    //     for(int j =0; j<2;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // upper triangle
    for(int i =0; i<3;i++){
        for(int j =0; j<3;j++){
            if(j>=i){
                cout<<arr[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //                          SOLUTION OF HOMEWORK QUESTIONS

    // lower triangle
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>=j)
                cout<<arr[i][j]<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    // boundary elements
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0 || j==0 || i==2 || j==2)
                cout<<arr[i][j]<<" ";
            else
                cout<<"  ";
        }

        cout<<endl;
    }
}