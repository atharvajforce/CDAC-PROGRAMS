#include<iostream>
using namespace std;

static int count ;
 class Base 
 {
   //int a;
   public :
    Base (){
        cout<<"Base class constructor"<<endl;
        count++;
    }
 };

 class Child1:virtual public Base{   // virtual fordolving diamond 
    
    public:
    Child1() {
        cout<<"Child1 constructor called"<<endl;
        count++;
    }
 };

 class Child2: virtual public Base{

    public:
    Child2() {
        cout<<"Child2 constructor called"<<endl;
        count++;
    }
 };

 class Child3 : virtual public Child1, public Child2{
    
    public:
    Child3() {
        cout<<"Child3 constructor called"<<endl;
        count++;
        cout<<"No. of times constructor invoked is:"<<count;
    }
 };

 int main() {

    Child3 ch;

 }
 
  
