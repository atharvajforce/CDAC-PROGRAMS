#include<iostream>
using namespace std;
 
int main()
{
    int num,i, flag=1;
cout<<"Enter a number ";
cin>>num;

 for (i=2;i<=num-1;i++)
 {
    if(num%i==0)
    {
        flag=0;
    }
     else 
     {
        flag=1;
     }

 }

 if(flag==1)
 {
    cout<<"Number is prime ";

 }

 else 
 {
    cout<<"Number is not prime";
 }

}
