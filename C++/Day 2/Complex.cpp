#include<iostream>
using namespace std;

class Complex {
    int real,img;
    public:
    //Complex();
    void accept();
    void display() const;
    void setReal(int);
    int getReal();

};

// Complex :: Complex() {
//    dd = 22; mm = 8; yy = 2025;
//    cout<<"Date is:"<<dd<<"/"<< mm <<"/"<<yy<<"no argument constructor"<<endl;
//}

void Complex::setReal(int d){
   real = d;
}

int Complex::getReal(){
   return real;
}

void Complex :: accept() {
    cout<<"Enter the  No."<<endl;
    cin>>real;"+";cin>>img;
}

void Complex :: display() const {
    cout<<"Complex No. is:"<<real<<"+"<<img<< "i"<<endl;
}

int main() {
    Complex c1;
    c1.accept();
    c1.display();
    c1.setReal(23);cout<<endl;
    cout<<"Real part is:"<<c1.getReal();
}