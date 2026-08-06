#include <iostream>
#include <string>
using namespace std;

int main(){
    string person = "naman";
    cout<<person.size()<<endl;
    cout<<person.length()<<endl;

    // string person_name;
    // getline(cin,person_name);

    // cout<<person_name<<endl;

    // for(int i =0; i<person.size();i++){
    //     cout<<person[i]<<" ";
    // }

    // reverse
    // for(int i =person.size()-1; i>=0;i--){
    //     cout<<person[i]<<" ";
    // }


    // palindrome naman
    // bool palindrome = true;
    // int i = 0;
    // int j = person.size()-1; //j =4
    // while(i<j){
    //     if(person[i] != person[j]){
    //         palindrome= false;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }

    // if(palindrome){
    //     cout<<"palindrome";
    // }
    // else{
    //     cout<<"not palindrome";
    // }

    // reverse using while loop (hw)
    string str = "Hello World";
    int i = 0;
    int j = str.length() - 1;
    
    while (i < j) {
        
       swap(str[i], str[j]);
        i++;
        j--;
    }
    
    cout << str;

    // anagram (read)

}