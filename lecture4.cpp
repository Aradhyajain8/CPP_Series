#include <iostream>
using namespace std;

int main(){
    // simple calculator using if else
    // int a,b;
    // char op;
    // cout<<"enter a ";
    // cin>>a;

    // cout<<"enter b ";
    // cin>>b;

    // cout<<"enter operator ";
    // cin>>op;

    // if(op == '+'){
    //     cout<<a+b<<endl;
    // }
    // else if(op == '-'){
    //     cout<<a-b<<endl;
    // }
    // else if(op == '*'){
    //     cout<<a*b<<endl;
    // }
    // else if(op == '/'){
    //     if(b != 0){
    //         cout<<a/b<<endl;
    //     }
    //     else{
    //         cout<<"division by zero";
    //     }
    // }
    // else if(op == '%'){
    //     if(b!=0){
    //         cout<<a%b<<endl;
    //     }
    //     else{
    //         cout<<"error";
    //     }
    // }
    // else{
    //     cout<<"invalid character";
    // }

    // switch case
    // switch(op){
    //     case '+':
    //     cout<<a+b<<endl;
    //     break;

    //     case '-':
    //     cout<<a-b<<endl;
    //     break;

    //     case '*':
    //     cout<<a*b<<endl;
    //     break;

    //     case '/':
    //     if(b!=0){
    //         cout<<a/b<<endl;
    //     }
    //     else{
    //         cout<<"division by zero";
    //     }
    //     break;

    //     case '%':
    //     if(b!=0){
    //         cout<<a%b<<endl;
    //     }
    //     else{
    //         cout<<"error";
    //     }
    //     break;

    //     default:
    //     cout<<"invalid character";
    // }


    // loops
    // 1)for
    // for(int i =1; i<6;i++){
    //     cout<<"hello"<<endl;
    // }

    // 2) while
    // int i =1;
    // while(i<10){
    //     cout<<i<<endl;
    //     i++;
    // }

    // 3)do while
    // int i =1;
    // do{
    //     cout<<"hii"<<endl;
    //     i++;
    // }while(i<6);

    // execute only once
    // int i =1;
    // do{
    //     cout<<"hii"<<endl;
    //     i++; 
    // }while(i<1); 




    // even number
    // for(int i =1; i<=100; i++){
    //     if(i % 2 == 0){
    //         cout<<i<<endl;
    //     }
    // }

                                // HOMEWORK QUESTIONS SOLUTION

    // // 1) odd numbers between 1 to 100(inclusive)
    // using for loop
    for(int i =1; i<=100; i++){
        if(i % 2 != 0){
            cout<<i<<endl;
        }
    }

    // using while loop
    int i =1;
    while(i<=100){
        if(i % 2 != 0){
            cout<<i<<endl;
        }
        i++;
    }


    // //2) multiplication table
    int a;
    cout<<"enter a number ";
    cin>>a;

    // using for loop
    for(int i=1;i<=10;i++){
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    }

    // using while loop
    int j =1;
    while(j<=10){
        cout<<a<<" * "<<j<<" = "<<a*j<<endl;
        j++;
    }
    


}