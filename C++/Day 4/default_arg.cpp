#include<iostream>
using namespace std;
int add(int a, int b=1 , int c=0);
int a,b,c;
int main() 
{ 
//   cout<<"Enter a nuber\n";
//   cin>>a>>b;  
  add(5);   
}

inline int add(int a, int b, int c)
{
    c = a+b;
    cout<<c<<"  ";
}

   