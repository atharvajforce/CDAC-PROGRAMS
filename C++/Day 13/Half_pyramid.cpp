
  #include<iostream>
  using namespace std;

  int main()
  {


for(int i=0; i<6; i++){/*Remember, this is a flow control loop,  always*/
        char temp = 'A'; /*Variable scope initializes temp to A in each iteration*/
        for(int j=0; j<=i; j++){
            cout<< temp <<" ";
            temp = (char)(temp + 1);
        }
        cout<<endl;
    }

}