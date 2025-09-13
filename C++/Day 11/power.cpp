

//double pow(double, double)	This function takes one argument as base and another as exponent.
#include <iostream>  
#include<cmath>  
#include<math.h>
using namespace std;  
int main()  
{  
int base;  
  int exponent;
  cout<<"Enter the Base & Exponent: "<<endl;
  cin>>base>>exponent;

  double power=pow(base,exponent);  
  cout << "Power of a given number is :" <<power;  
  return 0;  
}  