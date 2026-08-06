#include <iostream>
#include <string>
using namespace std;

int main(){
    string name="ram";
    // empty
    cout<<name.empty()<<endl;

    // push_back
    name.push_back('a');
    cout<<name<<endl;

    // pop_back()
    name.pop_back();
    cout<<name<<endl;

    // front()
    cout<<name.front()<<endl;

    // back()
    cout<<name.back()<<endl;

    // insert
    name.insert(1,"ba");
    cout<<name<<endl;

    // reverse()
    reverse(name.begin(), name.end());
    cout<<name<<endl;

    // sort
    sort(name.begin(),name.end());
    cout<<name<<endl;

    // find()
    // cout<<name.find("aba");

    if(name.find("aba") == string::npos){
        cout<<"hii"<<endl;
    }

    // anagram
    // str1 = car
    // str2 = arc

    string str1 = "car";
    string str2 = "arch";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2){
        cout<<"anagram";
    }
    else{
        cout<<"not anagram";
    }

}