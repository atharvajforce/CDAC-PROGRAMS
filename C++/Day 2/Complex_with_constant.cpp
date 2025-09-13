#include<iostream>
using namespace std;

class Complex {
    int real,img;
    public:
    Complex();
    Complex(int , int);
    void accept();
    void display() const;
    void setReal(int);
    int getReal()  const;

};

 Complex :: Complex() {

   cout<<"in default constructor \n";
    real =1;
    img =2;
}
 Complex :: Complex(int r , int i) {

   cout<<" in para constructor \n";
    real =r;
    img =i;
}

void Complex::setReal(int d){
   real = d;
}

int Complex::getReal() const{
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
    //Complex c1;
   // c1.accept();
    //c1.display();
   // c1.setReal(10);cout<<endl;
   // cout<<"Real part Set is\t:"<<c1.getReal();

    const Complex c2 (5,6);
    //   c2.setReal();
   
      cout<<"Real Part  "<<c2.getReal();
      c2.display();

      Complex c3 (1,2);
      c3.setReal(10);
      cout<<"Real Part "<<c3.getReal();
}