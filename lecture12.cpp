#include <iostream>
using namespace std;

// void reverse(int arr[], int start, int end){
//     while(start <end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void print(int arr[], int size){
//     for(int i =0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

int main(){
    // int arr[] = {1,2,3,4,5,6};
    // int size = sizeof(arr)/4;
    // int k;
    // cout<<"enter value of k ";
    // cin>>k;

    // k = k%size; 
    // // first k elements
    // reverse(arr,0,k-1);
    // print(arr,size);

    // // n-k reverse
    // reverse(arr,k,size-1);
    // print(arr,size);

    // // whole array reverse

    // reverse(arr,0,size-1);
    // print(arr,size);


    // int arr[] = {1,2,2,3,4,1,5,4};
    // int size = sizeof(arr)/4;

    // for(int i=0; i<size;i++){
    //     for(int j = i+1; j< size; j++){
    //         if(arr[i] == arr[j]){
    //             cout<<"duplicate "<<arr[i];
    //         }
    //         cout<<endl;
    //     }
    // }

    // 1 hashing 
    // 2 unique elements

    int arr[] = {1,2,2,3,4,1,5,4};
    int size = sizeof(arr)/4;

    for(int i=0; i<size;i++){
        bool unique = true;
        for(int j = i+1; j< size; j++){
            if(arr[i] == arr[j]){
                unique = false;
            }
            
        }
        if(unique){
            cout<<"unique "<<arr[i]<<endl;
        }
    }



}