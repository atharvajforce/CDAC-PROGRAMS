#include<iostream>
using namespace std;

class A {

int pvt1;
int prt1;

public :
  
friend class AJ;
void pvt()
{
  cout<<"Enter the private Element "<<endl;
  cin>>pvt1;
}
  
void prt()
{
    cout<<"Enter The Protected Element"<<endl;
    cin>>prt1;
}


};

class AJ : public A{
    public:

    void add () {
        pvt();
        prt();
        cout<<"Adition is :"<<this -> pvt1 + this -> prt1;
    }
};

int main() {
    AJ a;
    a.add();
}