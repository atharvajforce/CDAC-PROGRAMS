#include<iostream>
 using namespace std;
  int main()
{
  float a,p,r,t,ci;
  cout<<"Enter Principal, Rate,Time,no of times \n";
  cin>>p>>r>>t;

  float m = 1+(r/100);
  
  float pow = m;

  for(int i=1; i<t-1; t++){
    pow = pow * i;

  }

  float amt = p * pow;

  cout<<"Compound Interest :" <<amt -p ;


}

