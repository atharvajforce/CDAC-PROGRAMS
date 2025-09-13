#include<iostream>
#include<string.h>
using namespace std;

int main() {

    string vary = " ";
    cout<<"Enter a String \n";
    getline(cin, vary);

    string reverse = "";

    for(int i = vary.length()-1; i>=0; i--){
        reverse = reverse +  vary[i];
    }
    cout<<"Reversed String is \n"<<reverse;

}

