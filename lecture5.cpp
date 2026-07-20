#include <iostream>
using namespace std;

int main(){
    // square pattern

    // int n;
    // cout<<"enter value of n ";
    // cin>>n;

    // for(int i =1; i<=n;i++){
    //     for(int j =1; j<=n; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // rectangle
    // int row,col;
    // cout<<"enter value f row ";
    // cin>>row;

    // cout<<"enter value of col";
    // cin>>col;

    // for(int i =1; i<= row;i++){
    //     for(int j =1; j<= col;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    // inverted half
    // ****
    // ***
    // **
    // *
    // int n;
    // cout<<"enter value of n ";
    // cin>>n;

    // for(int i = n; i>=1;i--){
    //     for(int j = 1; j<= i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // DRY RUN
    // i=4 j=5 ****
    // i=3 j=4 ***
    // i=2 j=3 **
    // i=1 j=2 *


    // ALPHABET PATTERN
    // A
    // A B
    // A B C
    // A B C D

    // int n=6;
    // for(int i =1; i<=n;i++){
    //     char ch='A';
    //     for(int j= 1; j<=i; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }


                                    // HOMEWORK QUES SOLUTIONS

    // right half pyramid
    // int n;
    // cout<<"enter value of n ";
    // cin>>n;

    // for(int i = 1; i<=n;i++){
    //     for(int j = 1; j<= i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // NUMBER PATTERN
    // 1
    // 1 2
    // 1 2 3 
    // 1 2 3 4
    for(int i =1;i<=4;i++){
        for(int j= 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // same number pattern
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    for(int i =1;i<=4;i++){
        for(int j= 1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    




}