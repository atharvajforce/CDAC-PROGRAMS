#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &a_new = a;
    cout<< a_new << "\t"<<a <<"\n";
    cout<< &a_new << "\t"<<&a <<"\n";
    return 0;
}