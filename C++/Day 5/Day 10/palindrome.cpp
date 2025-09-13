#include<iostream>
#include<string.h>
using namespace std;

int main() {
    static int count,i = 0;
    string str = " ";
    
    cout<<"Enter the string to check whether is it palindrome ?:"<<endl;
    getline(cin, str); // full string with space 

    while(i < str.length()){
        for(int j=str.length()-1; j>=0; j--){
            if(str[i] == str[j]){
                cout<<"str[i] :"<<str[i]<<" str[j] :"<<str[j]<<endl;
                count++;
            }
            else
                cout<<"str[i] :"<<str[i]<<" str[j] :"<<str[j]<<endl;
            i++;
        }
    }

    if(str.length() == count){
        cout<<"The string is Palindrome"<<endl;
    }
    else{
        cout<<"String is not palindrome";
    }

}