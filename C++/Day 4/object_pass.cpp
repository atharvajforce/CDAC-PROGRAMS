#include<iostream>
using namespace std;

class Temp
{
    int a;

public:
    
    Temp(int val = 0) {
        a = val;
    }

    void get()
    {
        cout << "Enter a value: ";
        cin >> this->a;
    }

    Temp add(const Temp& b1) 
    {
        Temp aobj3;
        aobj3.a = this->a + b1.a;
        return aobj3;
    }

    void show()
    {
        cout << "Value is: " << a << endl;
    }
};

int main()
{
    Temp aobj1, aobj2;
    aobj1.get();
    aobj2.get();

    Temp aobj4 = aobj1.add(aobj2);
    aobj4.show();

    return 0;
}