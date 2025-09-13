#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
//int a,b,c;
class Stl {

    public:
    void ceil1(int x){
        cout<<"Ceiled value : "<< ceil(x)<<endl;
    }
    
    void roundoff1 (int y) {
        cout<<"Round of value : "<< round(y)<<endl;
    }

    void floor1(int z) {
         cout<<"floor value : "<< floor(z)<<endl;
    }
    
    void abs1(int q) {
         cout<<"Absolute value : "<< abs(q)<<endl;
    }
    void pow1(int a , int b) {
         cout<<"Power function value  : "<< pow(a,b)<<endl;
    }
    
};

int main () { 
  
    Stl s1;
    s1.ceil1(10.5);

    Stl s2;
    s2.floor1(9.4);

    Stl s3;
    s3.roundoff1(11.2);

    Stl s4;
    s4.abs1(-8.5);
    
    Stl s5;
    s5.pow1(7,2);


    // cout<<"Enter the value of the for roundoff :";
    // cin>>a;

    // cout<<"Enter the value of for ceil :";
    // cin>>b;

    // cout<<"Enter the value of the for roundoff :";
    // cin>>c;


}

