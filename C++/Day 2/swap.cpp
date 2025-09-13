#include<iostream>
uaing namespace std;

int main(){
    int a,b;    
    cout<<"Enter no.s to swap";
    cin >> a >>b;

    cout<<endl;

    int temp = a;
    a = b;
    b = temp;

    cout<<"Result after swapping :"<<a<<b;
}