#include <iostream>
using namespace std;

int main(){
    // hollow square pattern
    // ****
    // *  *
    // *  *
    // ****

    int n;
    cout<<"enter value of n ";
    cin>>n;
    // for(int i =1; i<=n;i++){
    //     for(int j = 1;j<=n;j++){
    //         if(i==1 || i==n ||j==1|| j==n){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // hollow rectangle (homework)
    // ******
    // *    *
    // ******

    // int row,col;
    // cout<<"enter value of row ";
    // cin>>row;

    // cout<<"enter value of col ";
    // cin>>col;

    //  for(int i =1; i<=row;i++){
    //     for(int j = 1;j<=col;j++){
    //         if(i==1 || i==row ||j==1|| j==col){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }




    // hollow pyramid
    //    *
    //   *  *
    //  *    *
    //  *******

    // for(int i =1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }

    //     for(int k = 1;k<=2*i-1;k++){
    //         if(i==n || k == 1 || k==2*i-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // hollow diamond(homework)
    //    *
    //   *  *
    //  *    *
    //  *******
    //  *     *
    //   *   *
    //     *

    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(int k = 1;k<=2*i-1;k++){
            if(i==n || k == 1 || k==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";

        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
    }

    // PASCAL TRIANGLE
    //     1
    //    11
    //   121
    //  1331
    // 14641

    // for(int i=1;i<=n;i++){
    //     int num=1;
    //     for(int j =1;j<=n-i;j++){
    //         cout<<" ";
    //     }

    //     for(int k = 1; k<=i;k++){
    //         cout<<num;
    //         num = num *(i-k)/k;
    //     }
    //     cout<<endl;
        
    // }

}