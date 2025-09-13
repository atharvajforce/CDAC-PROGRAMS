#include<iostream>
using namespace std;
 int main()
 { int i,j; int s;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={2,4,6,8,10,12,14,16,18};
    int c[3][3];
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             c[i][j]=a[i][j] + b[i][j];
        }
    }
    
   for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<" "<<c[i][j];
        }
         cout<<"\n";
    }
    
 }