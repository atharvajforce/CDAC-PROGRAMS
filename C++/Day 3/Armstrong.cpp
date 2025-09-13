#include<iostream>
#include<math.h>
using namespace std;
int main()

{
  int num ,n, sum=0 , result; int rem, count=0;
  cout<<"Enter a Number :\n";
  cin>>n;
  num=n;

     while (num!=0)
   {
     count++;
     num =num/10;// 15
        
}
  num=n;
   while (num!=0)
   {
     int rem = num%10; //3 
     sum= sum+pow(rem ,count);
     num =num/10;// 15
        
}
  
   cout<<"sum of digits is "<< sum<<endl;

   //cout<<"sum of cube of digits is "<< sum2<<endl;
  
    
    if (sum==n)
   {
   cout<<"Number is Armstrong "<< sum;
   }
   else
   {
    cout<<"Number is Not Armstrong "<< sum;
   }

}
