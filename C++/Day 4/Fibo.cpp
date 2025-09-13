#include<iostream>
using namespace std;
int main() {
    int sum = 0;
    int n;

    cout<<"No. of Fibonacci sequence:";
    cin>>n;

    int previous = 0, next = 1;
    cout<<previous<<" "<<next<<" ";
    for(int i=0; i<n-2; i++){
       sum = previous + next;
       previous = next;
       next = sum;
       cout<<sum<<" ";
    }

}