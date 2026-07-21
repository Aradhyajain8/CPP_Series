#include <iostream>
using namespace std;

int main(){
    // no. pattern
    // 1
    // 2 3
    // 4 5 6

    int n;
    cout<<"enter value ";
    cin>>n;

    // int count = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j = 1; j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }



    // horizontal pyramid pattern
    // *
    // * *
    // * * *
    // * *
    // *

    // for(int i =1; i<=n;i++){
    //     for(int j =1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i =n-1;i>=1;i--){
    //     for(int j =1; j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // A B C 
    // A B
    // A 
    // A B
    // A B C

    // for(int i =n; i>=1;i--){
    //     char ch ='A';
    //     for(int j =1; j<=i;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // for(int i =2; i<=n;i++){
    //     char ch='A';
    //     for(int j = 1;j<=i;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }





    // ___*
    // __***
    // _*****
    // *******

    // for(int i =1; i<=n;i++){
    //     for(int j=1; j<=n-i;j++){
    //         cout<<" ";
    //     }

    //     for(int k = 1; k<=2*i-1;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //                              HOMEWORK QUESTIONS SOLUTION

    // 1 alphabet pattern
    // a
    // b c
    // d e f

    // char ch='A';
    // for(int i=1; i<=n; i++){
    //     for(int j = 1; j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // 2 
    // 1
    // 1 2
    // 1 2 3
    // 1 2 
    // 1

    // for(int i =1; i<=n;i++){
    //     for(int j =1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for(int i =n-1;i>=1;i--){
    //     for(int j =1; j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    //3 inverted pyramid
    // *****
    //  ***
    //   *

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }

        for(int j = 1; j <= 2*i-1; j++){
            cout << "*";
        }

        cout << endl;
    }

    

}