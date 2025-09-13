#include<iostream>
using namespace std;

class Complex{
 int real;
 int img;
 public :

//   Complex(){
//     real,img = 0;
//   }
  Complex(int r, int i){
    real=r;
    img =i;
  }
   
  Complex operator+ (Complex & c){
     Complex c(0,0);
     c.real = this->real + c.real;
     c.img = this->img + c.img;
     return c;
  }

  friend ostream& operator<< (ostream& o, Complex& t) {
    o << "Addition of Complex no.s " << t.real <<"+"
    <<t.img<<"i"<<endl;     
  }

};


int main()
{   Complex C1(3,4);
    Complex C2(1,2);
    Complex C3 = C1+C2;
    cout<<C3;
}