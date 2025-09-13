#include<iostream>
using namespace std;
 int a=10 ,b=5;
 namespace N1 {    // namespace can be declared in only global scope 
     
    void add ()
    {
        cout<<"Addition is "<<a+b<<endl;
    }
     
    }

    namespace N2{
         
     void mul()
     {
        cout<<"Multiplication is "<<a*b<<endl;
     }

    }

    int main()
    {
        
       N1::add();
       N2::mul();

    }