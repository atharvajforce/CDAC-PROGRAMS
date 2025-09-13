#include<iostream>
using namespace std;
 class A {
    int i;
    int j;
  public:
    A(int i, int j)
    {
        cout<<"PARA Constructor"<<endl;
        this -> i = i;   //poiting to current invoking object 
        this -> j = j;
    }
    
    void summation () {
      cout<<"Summation is "<<i+j<<endl;
    }

    // void display()
    // {
    //   cout<<"Value of i & J is "<<*i+*j<<endl;
    // }

    ~A()
    {
      cout<<"Desctructor is called "<<endl;
    }


};


int main()
{
  /* When objects are on heap, 
  need to call destructor explicitly */
  A ptr = A(25,63);
  {
    A* a = &ptr;
    a->summation();
    a->~A();
    // A s2(*ptr);
    // s2.summation(); 
  }

  ptr.summation();
  //delete a;
}