#include<iostream>
using namespace std;

/* Addition using pass by value, pass by reference and address */
void add1(int p, int q) {
    cout<<"Pass by value \n";
    cout<<"Addition is :"<< p + q;
    cout<<endl;
}

void add2(int &p, int &q){
    cout<<"Pass by reference :\n";
    cout<<"Addition is:"<< p+q << endl;

}

void add3(int* p, int* q) {
    cout<<"Pass by Address:"<<endl;

    cout<<"Addition is ; "<< *p + *q;
}

int main(){
    int a=5,b=9;

    add1(a,b);
    add2(a, b);
    add3(&a, &b);
    
}