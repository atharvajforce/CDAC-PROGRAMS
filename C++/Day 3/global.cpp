#include<iostream>
using namespace std;
 static int x;
void display();
 int main()
 {
    int x=0;
   cout<<x<<endl; 
  x++;
 
  display();
  display();
  display();

 }
 void display()
 {
    x++;
    cout<<x<<endl;
    
 }