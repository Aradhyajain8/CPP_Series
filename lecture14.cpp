#include <iostream>
using namespace std;
//tc =  O(logn)

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/4;
    int start = 0;
    int end = size-1;
    int key = 15;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            cout<<"present";
            return 0;
        }
        else if (arr[mid] < key ){
            start = mid + 1;
        }
        else{
            end = mid -1;
         }
    }

    cout<<"not present";
}