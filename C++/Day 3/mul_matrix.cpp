#include<iostream>
using namespace std;
 int main()
 { int i,j; int s;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6};
    int c[3][3];
    int p[3][3];
   
    for (i=0;i<3;i++)
    {
        int mul = 1;
        for(j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
            mul = mul+a[i][k]*b[k][j];
            c[i][j]  = mul ;
        }
         p[i][j] = c[i][j];
    }
    }
    
   for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<" "<<p[i][j];
        }
         cout<<" \n";
    }
    
 }