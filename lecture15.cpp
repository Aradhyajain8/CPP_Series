#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,2,5};
    int size = sizeof(arr)/4;

    // best = O(n) 
    // worst = O(n^2)
    for(int i =0; i<size-1;i++){
        bool swapped = false;
        for(int j = 0; j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }

    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }

    // inplace & stable

}