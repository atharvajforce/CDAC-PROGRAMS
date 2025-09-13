#include<iostream>
using namespace std;

template<class T>

void add (T x, T y) {
 cout<<"Addition is :"<<x+y;
}

int main() {
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;

    add(a,b);
}



