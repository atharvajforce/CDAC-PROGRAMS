#include<iostream>
 using namespace std;
 
 class Student
 {
   public:
   int id;
    char name;
   Student();
  void Student1(int , char);

 };

 Student :: Student() 
 {
    cout<<"Default Constructor \n";

 }
void Student :: Student1(int id, char name)
 {
    cout<<id<<" "<<name<<endl;

 }
 int main()
 {
   Student s1;
   s1.Student1(1,'n');


 }

