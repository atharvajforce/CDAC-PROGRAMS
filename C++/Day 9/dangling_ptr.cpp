#include<iostream>
using namespace std;
 class A{
//  int i,j,sum ; 
 int *i = new int();
 int *j = new int();
  public:
    A(int i, int j)
    {
     
        cout<<"PARA Constructor"<<endl;
        *this -> i = i;                  //poiting to current invoking object 
        *this -> j = j;
        cout<<"Summation :"<< i + j<<endl;
    }
    
    void summation () {
      cout<<"summation is "<<*i+*j;
    }

    // void display()
    // {
    //   cout<<"Value of i & J is "<<*i+*j<<endl;
    // }

    ~A()
    {
      cout<<"Desctructor is called"<<endl;
    }
};


int main()
{
  A* ptr = new A(25,63);
  {
    A s2(*ptr);
   
  }
     delete ptr;
}