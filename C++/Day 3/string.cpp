#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    char str[50] ="Hello World";
    char str1[] ="Hello\0 world";

    int len = strlen(str);
    cout<<"Length of string is "<<len<<endl;
    cout<<"size of string is "<<sizeof(str)<<endl;
    cout<<str<<endl;
    cout<<str1<<endl;
    cout<<sizeof (str1);
    cout<< strlen(str1)<<endl;
}

