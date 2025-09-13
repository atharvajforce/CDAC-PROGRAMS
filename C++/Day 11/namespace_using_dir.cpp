#include<iostream>
using namespace std;
 
 namespace N1 {    // namespace can be declared in only global scope 
     
    void add ()
    {
        int a=10 ,b=5;
        cout<<"Addition is "<<a+b<<endl;
    }
     
    }

    namespace N2{
         
     void mul()
     { int a,b;
        cout<<"Enter The Numbers "<<endl;
        cin>>a>>b;
        cout<<"Multiplication is "<<a*b<<endl;
     }

    }
     using namespace N1;  // it is declared before main fucntion 
     using namespace N2;
    int main()
    {
       //add(); 
       mul();
     
    }