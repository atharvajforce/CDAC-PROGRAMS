#include<iostream>
using namespace std;

class Cdate {
    int dd,mm,yy;
    public:
    //Cdate();
    void accept();
    void display() const;
    void setDd(int);
    int getDd();

};

// Cdate :: Cdate() {
//    dd = 22; mm = 8; yy = 2025;
//    cout<<"Date is:"<<dd<<"/"<< mm <<"/"<<yy<<"no argument constructor"<<endl;
//}

void Cdate::setDd(int d){
   dd = d;
}

int Cdate::getDd(){
   return dd;
}

void Cdate :: accept() {
    cout<<"Enter the data in dd/mm/yy format"<<endl;
    cin>>dd;cout<<"/";cin>>mm;cout<<"/";cin>>yy;
}

void Cdate :: display() const {
    cout<<"Date is:"<<dd<<"/"<< mm <<"/"<<yy;
}

int main() {
    Cdate d1;
    d1.accept();
    d1.display();
    d1.setDd(23);cout<<endl;
    cout<<"Date is:"<<d1.getDd();
}