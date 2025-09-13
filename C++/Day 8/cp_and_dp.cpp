#include<iostream>
#include<string.h>
using namespace std;

class Copy {
    int id;
    string* name;

    public:
    
    void accept() {
        char namei = ' '; 
        cout<<"Enter the id :"<<endl;
        cin>>id;
        cout<<"Enter the name"<<endl;
        cin>>namei;
        strcpy(name, &namei);
        cout<<endl;
    }

    void display(){
        cout<<"id is :"<<id<<" and Name is : ";

        for(int i=0; i<name.length(); i++) {

        }
    } 

    
};

int main() {
    Copy c1;
    Copy c2(c1);
    c2.accept();
    c2.display();
}