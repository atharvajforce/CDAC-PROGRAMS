    #include<iostream>
    using namespace std;
    
    int main()
    {
    for(int i=0; i<=6; i++){
        
        for(int j=1; j<=6-i; j++){
            cout<<"  ";
        }

        int t = 0;
        char temp = 'A';
        for(int k=1; k<=i+1; k++){
            cout<<temp<<"   ";
            temp++;
        }

        // for(int k=(2*i-2); k>=i; k--){
        //     cout<<temp<<" ";
        //     temp = (char)(temp+k);
        // }
        cout<<endl;
    }
}