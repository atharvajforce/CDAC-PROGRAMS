//ASSIGNMENT 1:
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
		cout<<"in display of A\n"<<a<<c<<endl;
	}

    void getC() {
        cout<<c<<endl;
    }
};
class B:public A
{
public:
	int c;
public:
	void show()
	{
	    display();//allowed
		cout<<a<<b<<endl;
        getC();
	}
};
class C:public B
{
	public:
	void show()
	{
	   // display(); not allowed
		//cout<< a<<b; not allowed
		//cout<<A::getC()<<b;
	}
};
int main()
{
	B bobj;
	bobj.show();
//	bobj.display(); not allowed
}
//====================================================================================
// //ASSIGNMENT 2:
// #include<iostream>
// using namespace std;
// class A
// {
//         int c;	
//     protected:
// 	    int b;
//     public:
//         int a;
// 	    void display()
// 	    {
// 		    cout<<"in display of A\n"<<a;
// 	    }

// };
// class B:public A
// {
//     public:
// 	    void show()
// 	    {
// 	        display();
// 		    cout<<a<<b;
// 	    }
// };
// class C:public B
// {
// 	public:
// 	void show()
// 	{
// 		cout<< a<<b;
// 	}
// };
// int main()
// {
// 	C cobj;
// 	cobj.show();
//     A aobj;
// 	aobj.display();
// }
// // //====================================
// //ASSIGNMENT 3:
// #include<iostream>
// using namespace std;
// class A
// {
// int c;
// public:
// 	int a;
// protected:
// 	int b;
// protected:
// 	void display()
// 	{
// 		cout<<"in display of A\n";
// 	}

// };
// class B:protected A
// {
// public:
// 	int d;
// 	public:
// 	void show()
// 	{
// 	    	B bobj;
// 	bobj.display();
// 		cout<<a<<b;
	
// 	}
// };

// int main()
// {
//     B bobj;
//     bobj.show();
// }