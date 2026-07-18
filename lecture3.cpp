#include <iostream>
using namespace std;

int main(){
    // typecasting
    // implicit typecasting

    // float a = 10.8;
    // int b = a;
    // cout<<b;

    // char a ='a';
    // int b =

    // ASCII VALUES
    // A-Z (65-90)
    // a-z (97-122)

    // char a = 'Z';
    // int b = a;
    // cout<<b;

    // int a = 65;
    // char b = a;
    // cout<<b;

    // explicit
    // float a = 10.8;
    // cout<<(int)a;

//     char a = 'b';
//     cout<<(int)a;

// IF STATEMENT
    // int age = 20;
    // if(age >= 18){
    //     cout<<"allowed to vote";
    // }

    // if else
    // if(age >= 18){
    //     cout<<"allowed to vote";
    // }
    // else{
    //     cout<<"not allowed to vote";
    // }

// ELSE IF LADDER
    // int marks = 10;
    // if(marks >= 90){
    //     cout<<"grade A";
    // }
    // else if(marks >= 75 && marks <90){
    //     cout<<"grade B";
    // }
    // else if(marks >=50 && marks < 75){
    //     cout<<"grade C";
    // }
    // else{
    //     cout<<"fail";
    // }

    // NESTED IF
    // int age = 16;
    // bool IndianCitizen = false;

    // if(age>= 18){
    //     if(IndianCitizen){
    //         cout<<"allowed to vote";
    //     }
    //     else{
    //         cout<<"not allowed";
    //     }
    // }else{
    //     cout<<"hello";
    // }

    // SWITCH CASE
    int day; //1 - monday , 2- tuesday and so on
    cout<<"enter a value for day ";
    cin>>day;

    switch(day){
        case 1:
        cout<<"monday"<<endl;
    //  Without break, execution continues into the next case. This is called fall-through
        break;

        case 2:
        cout<<"tuesday"<<endl;
        break;
        

        case 3:
        cout<<"wed"<<endl;
        break;

        default:
        cout<<"invalid number"<<endl;
    }
    

   
}