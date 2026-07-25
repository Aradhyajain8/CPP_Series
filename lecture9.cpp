#include <iostream>
using namespace std;

// void print(){
//         cout<<"hello"<<endl;
//     }

// void print(string name){
//         cout<<"hello "<<name<<endl;
//     }

// int add(int a, int b){
//     return a+b;
// }

// int add(int a, int b,int c){
//     return a+b+c;
// }

void greet(string name="aradhya"){
    cout<<"hello "<<name<<endl;
}

inline int add(int a=10, int b=30){
    return a+b;
}

            //                  HOMEWORK QUESTION SOLUTION
// area of square and rectangle using function overloading
int area(int length,int breadth){
    return length*breadth;
}

int area(int n){
    return n*n;
}

//  maximum of 2 and 3 number using overloading
int maxi(int num1,int num2){
    return max(num1,num2);
}

int maxi(int num1,int num2,int num3){
    // max of first 2 number
    int twoMax= max(num1,num2);
    // max of 3rd number and the max of first 2
    return max(twoMax,num3);
}

// find cube of a number using inline function
inline int cube(int n){
    return n*n*n;
}

int main(){
    // function overloading
    // print();
    // print("aradhya");

    // cout<<add(2,3)<<endl;
    // cout<<add(2,3,4)<<endl;

    // greet("seema");
    // cout<<add();

    cout<<"area of square "<<area(4)<<endl;
    cout<<"area of rectangle "<<area(4,5)<<endl;

    cout<<"max of 2 number "<<maxi(2,3)<<endl;
    cout<<"max of 3 number "<<maxi(2,3,4)<<endl;

    cout<<"cube of a number "<<cube(3)<<endl;
    
}