#include<iostream>
using namespace std;
 template <class T , class S>
  class A
 {
    public :
    T num1;
    T num2;
        A(T x, T y)
        {
          num1 = x;
          num2 = y;  
        }

      void mul()
      {
        int mul=1;
        mul = num1*num2;
        cout<<"Multiplication is : "<<mul;
      }  
     
 };

 int main()
 {
    int a,b;
    cout<<"Enter the Numbers : "<<endl;
     cin>>a>>b;
    A<int,float> s1(a,b);
    s1.mul();

 }