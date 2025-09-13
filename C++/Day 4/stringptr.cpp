#include<iostream>
#include<string.h>
using namespace std;

string reverse(string* h){
    // string* k = h;

    string reverse = " ";
    cout<<h->length()<<endl;
    for(int i = h->length() - 1; i>0; i--){
        reverse = reverse + *(h+i);
    }

    return reverse;
}

int main(){

    string str;

    cout<<"Enter the String: ";
    getline(cin, str);

    string returned = reverse(&str);
    cout<<"Returned string : "<<returned;
}
