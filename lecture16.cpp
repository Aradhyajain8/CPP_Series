#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,2,5,1,6};
    int size = sizeof(arr)/4;

    for(int i =0; i<size-1;i++){
        int miniIdx = i;//3
        for(int j =i+1;j<size;j++){
            if(arr[j] < arr[miniIdx]){
                miniIdx = j;
            }
        }
        swap(arr[miniIdx], arr[i]);
    }

    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }

}