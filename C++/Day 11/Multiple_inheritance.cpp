#include<iostream>
using namespace std;
class P1
{
   public:
   void display()
   {
   cout<<"Parent class 1"<<endl;
   }
};

class P2 
{
    public:
    void display()
    {
       cout<<"Parent class 2"<<endl; 
    }
};

class C1 : virtual public P1 ,  virtual public P2
{
    public:
    void display()
    {
       P1::display();
       P2::display();
      //  cout<<"Child ";
       
    }
    void display()
    {
        cout<<"Child Class "<<endl;
    }

};

int main()
{
    C1 chi;
     //chi.show();
     chi.display();


    //  chi.P1::display();
    //  chi.P2::display();
    chi.display();
}