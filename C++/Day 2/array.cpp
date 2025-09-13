#include<iostream>
using namespace std;

int main()
{
  int a[5];
  int b[3][3];
  
  cout<<"Enter array elements"<<endl;
  for(int i = 0; i<5; i++){
    cout<<"Element "<<i<<":";
    cin>>a[i];
  }
  cout<<endl;

  cout<<"Enter 2d array elements:"<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<"Element"<<i<<","<<j<<":";
        cin>>b[i][j];
    }
  }
  cout<<endl;

  cout<<"Array elements : "<<endl;
  for(int i = 0; i<5; i++){
    cout<<a[i]<<"\t";
  }
  cout<<endl;

  cout<<"2d array elements:"<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<b[i][j]<<"\t";
    }
    cout<<endl;
  }

}