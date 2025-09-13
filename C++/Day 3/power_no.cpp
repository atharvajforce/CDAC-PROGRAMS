#include<iostream>
using namespace std;

int main() {
    int num,p;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Enter power";
    cin>>p;

    int ans = 1;
    for(int i=0 ; i<p; i++){
        ans =ans * num;
    }
    cout<<"Answer is:"<<ans;
}