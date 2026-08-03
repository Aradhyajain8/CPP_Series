#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,3,2,4,1}; 
    int n = sizeof(arr)/4;

    for(int i =1; i<n;i++){
        int key = arr[i]; //3 j=-1 3,5,2,4,1
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    // TC BEST CASE = O(n) 
    // worst and avg = O(n^2)
    // stable and inplace
}