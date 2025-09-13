#include<iostream>
using namespace std;
class A
{
        int c;	
    protected:
	    int b;
    public:
        int a;
	    void display()
	    {
		    cout<<"in display of A\n"<<a;
	    }

};
class B:public A
{
    public:
	    void show()
	    {
	        display();
		    cout<<a<<b;
	    }
};
class C:public B
{
	public:
	void show()
	{
		cout<< a<<b;
	}
};
int main()
{
	C cobj;
	cobj.show();
    A aobj;
	aobj.display();
}