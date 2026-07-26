#include <iostream>
using namespace std;

int main(){
    int marks[5] = {10,50,7,30,78};
    int size = sizeof(marks)/sizeof(marks[0]);
    // cout<<size<<endl;

    // for(int i=0; i<size; i++){
    //     cout<<marks[i]<<" ";
    // }

    // sum of elements
    // int sum=0;
    // for(int i=0;i<size;i++){
    //     sum = sum + marks[i];
    // }
    // cout<<"sum is "<<sum;

    // max of elements
    int maxi= marks[0];
    for(int i=0;i<size;i++){
        if(marks[i] > maxi){
            maxi = marks[i];
        }
    }
    cout<<"maximum value is "<<maxi<<endl;
    // i=4, maxi = 78

    // minimum value in the array
    int mini= marks[0];
    for(int i=0;i<size;i++){
        if(marks[i] < mini){
            mini = marks[i];
        }
    }
    cout<<"minimum value is "<<mini<<endl;

}