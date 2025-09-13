#include<iostream>
#include<time.h>
#include<algorithm>
using namespace std;

class ATM 
{
  int amount ,balance= 10000;
  int w;
  int pins [4] = {1212, 6009, 5896, 5863};
  int temp_pin;

  public :
  bool flag = false;
  void Check_Balance()
  {
     cout<<"Current Balace is ;"<<balance;
  }

  void Withdraw(){
    cout<<"Enter the Amount "<<endl;
    cin>>amount;
    if(amount>balance)
    {
        cout<<"Insufficient Funds "<<endl;
    }
    else
    {
        balance = balance - amount;
        cout<<"Your withdrawl was of an amount "<< amount 
        <<" And your current account \n balance is: "<<balance;
    }

  }

  bool authentication(){
        cout<<"Enter the 4 digit pin :";
        cin>>temp_pin;
        int i = 0, left=0, right = sizeof(pins)/sizeof(pins[0])-1;
        sort(pins, pins + 4);
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(temp_pin == pins[mid]){
                return true;
            }

            else if(temp_pin < pins[mid]){
                left = mid + 1;
                return true;
            }

            else{
                right = mid - 1;
                return true;
            }   
        }
        return false;
        
        
        // if(flag){
        //     cout<<"Authentication Succesful"<<endl;
        //     Withdraw();
        // }
        // else{
        //     cout<<"Authentication Unsuccesful, please enter the correct pin"<<endl;
        // }

    }

};

int main(){

 ATM A1;
 bool flg2 = A1.authentication();
 if(flg2){
     cout<<"Authentication Succesful"<<endl;
     A1.Withdraw();
 }
 else{
    cout<<"Authentication Unsuccesful, please enter the correct pin"<<endl;
 }
 
}