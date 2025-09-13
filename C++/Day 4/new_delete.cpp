#include<iostream>
using namespace std;
int main()
{
  int n, i;

cout<<"Enter no of elements \n";
cin>>n;

 int *ptr = new int[n]; //runtime  memory allocation
        cout<<"Accept Elements \n";

        for(i=0;i<n;i++)
        {
            cin>>ptr[i];
        }

    cout<<"Display Elements\n"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<ptr[i]<<"\t";
     }
      delete [] ptr;
      cout<<endl<<*ptr;
    }

