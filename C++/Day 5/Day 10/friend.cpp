#include<iostream>
using namespace std;

class A {

int pvt;
int prt;

public :
  
friend class AJ;
void pvt()
{
  cout<<"Enter the private Element "<<endl;
  cin>>pvt;
}
  
void prt()
{
    cout<<"Enter The Protected Element"<<endl;
    cin>>prt;
}


};

class AJ : public A{
    public:

    void add () {
        pvt();
        prt();
        cout<<"Adition is :"<< pvt+prt;
    }
};

int main() {
    AJ a;
    a.add();
}