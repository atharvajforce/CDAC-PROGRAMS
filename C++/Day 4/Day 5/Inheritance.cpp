#include<iostream>
using namespace std;

class Employee {
    int id;
    public:

    Employee(){
        /* When no arg constructor is provided,
        the compiler doesnt invoke default constructor*/
     /*
        allows the programmer to include custom
        initialization logic, set specific default values,
        or perform other actions when an object of 
        the class is created without any arguments.
    */
    }
     Employee(int i){
        id = i;
     }
     
     void display() {
        cout<<"Employee Id :"<<id<<endl;
     }
     int getId() {
        return id;
     }
};

class WageEmployee : public Employee {
    int hrs, rate;
    public:

        WageEmployee(int h, int r):Employee(i){
            hrs = h;
            rate = r;
        }

        int returnWage() {
            return hrs*rate;
        }

};

class SalesEmployee : WageEmployee {
    int sale_sal, commi;

    public:

        SalesEmployee(int i,int h,int r,int s, int c):WageEmployee(h, r){
            sale_sal = s;
            commi = c;
        }

        void display() {
            cout<<"Sales salary of person with id "<<Employee::getId()<<"is :"<<sale_sal+commi <<"and his wage would be:"<<WageEmployee::returnWage();
        }
};

int main() {
    SalesEmployee ss(1, 2, 2000, 10000, 3500);
};