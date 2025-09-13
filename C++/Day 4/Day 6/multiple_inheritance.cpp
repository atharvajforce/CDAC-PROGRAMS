#include<iostream>
using namespace std;

class Vehicle {
    protected:
     int length, width;
 
    public:
    Vehicle()  {
        cout<<"Length :"<<length<<" width:"<<width<<endl;
        width = 5;
        length = 10;
    }
    
    void display() {
        cout<<"This is display function of Vehicle, No Separate calling from derived class"<<endl;
    }

};

class Car : protected virtual Vehicle {
    int height;

    public:

    Car(int h) {
        height = h;
    }

    Car() {
        cout<<"cars have largest height"<<"which is"<<height<<"m"<<endl;
    }

    void display() {
        Vehicle ::display();
        cout<<"in the display of SUV"<<"length is :"<<length<<" Width is :"<<width<<endl;
    }

};

class Hatchback : public virtual Vehicle, public Car{

    public:
    Hatchback() {
        cout<<"Hatchback can be considered as SUV and Sedans"<<endl;
    }

    void display() {
        Vehicle::display();
        cout<<"This is in display of Hatchback"<<"minimum length is:"<<Vehicle::length;
    }

};

int main(){
    Hatchback b;
    b.display();


}