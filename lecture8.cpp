#include <iostream>
using namespace std;

// // 1 no arg, no return value
// void greet(){
//     cout<<"hi"<<endl;
// }

// // 2 arg, no return type
// void add1(int a,int b){
//     cout<<a+b<<endl;
// }

// // 3 no arg, return type
// int getNumber(){
//     return 10;
// }

// // 4 arguments, return type
// int add(int a, int b){
//     return a+b;
// }

// int fact(int n){
//     int ans = 1;
//     for(int i=n; i>=1;i--){ //ans = 5*4*3*2*1
//         ans = ans*i;
//     }
//     return ans;
// }

// bool prime(int n){
//     int factor = 0;//2
//     for(int i =1; i<=n;i++){
//         if(n % i == 0){
//             // factor= factor +1;
//             factor += 1;
//         }
//     }

//     if(factor == 2){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

bool prime(int n){
    for(int i =2; i<=n/2;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    // library functions
    // cout<<sqrt(12);
    // cout<<pow(3,2);
    // cout<<max(2,3);
    // cout<<min(2,3);

    
    // user defined function
//     int ans= add(2,3);
//     cout<<ans<<endl;
//     cout<<add(2,3)<<endl;
//     greet();
//     add1(2,3);
//     cout<<getNumber();

    // cout<<fact(10);

// 5 = 5*4*3*2*1
// 1,0 =1

// multiplication of 2 number (hw)
// sum of n natural numbers (hw)

// prime numbers - 2,3,5,7 
// factor = 1, number itself

    if(prime(5)){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}