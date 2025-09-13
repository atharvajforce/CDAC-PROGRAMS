#include<iostream>
using namespace std;
class Assignment{
    int n;
    int *arr;
    
    public:
    void user_defined() {

        cout<<"No. of input elements: ";
        cin>>n;

        if(n<2){
            cout<<"Array length should be greater than 2"<<endl;
            return;
        }
    
        arr = new int[n];
        for(int i=0; i<n; i++){
            cout<<"Enter element at index "<<i<<":";
            cin>>arr[i];
        }

        int max = arr[0], max_2 = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max_2 = max;
                max = arr[i]; 
            }
            else if(arr[i] > max_2 && arr[i] != max ) {
                max_2 =  arr[i];
            }
        }

        cout<<"2nd largest element : "<<max_2;

        delete [] arr;
        cout<<endl<<"-----------------------"<<endl;
    
    }

    void pattern() {
        for(int i=0; i<5; i++){
            for(int j = 0; j<i+1; j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=5; i>0; i--){
            for(int j=0; j<-(1-i); j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

};

int main() {
    Assignment a;

    a.user_defined();
    a.pattern();
    
}