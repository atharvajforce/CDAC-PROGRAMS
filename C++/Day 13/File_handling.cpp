#include<iostream>
#include <fstream>
using namespace std;

class File
{
  string file_name;

 public:
  File(){
    cout << "Enter File Name: ";
    cin >> file_name;
  }

 void display();

};

void File :: display(){
  ofstream myfile(File::file_name);
  if(myfile){
    myfile<<"This is "<< File::file_name<<".txt"<<endl<<"Second time opening";
  }
  else{
    myfile.open(File::file_name);;
    myfile<<"This is "<< File::file_name<<endl<<".txt"<<"First time opening";
  }
  myfile.close();
}

int main(){
 File F1;
 F1.display();
}