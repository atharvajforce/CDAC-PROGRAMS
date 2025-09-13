#include <iostream> 
using namespace std; 
#include<string.h>
static int count = 0;
class string1
{
	int len;
	char* ptr;
	public:
		string1();
		void display();
		string1(char*);
		string1(char,int);
		string1(int);
	  ~string1()
		{
            count++;
			cout<<"destructor is called\n"<<"and current count is :"<<count<<endl;
			if(ptr)
			{
			cout<<endl;
			delete[]ptr;
			ptr=NULL;
			}
		
		} 
};
void string1::display()
{
	if(len>1)
	{
			cout<<"length of character is "<<len<<endl;
			cout<<"string is "<<ptr<<endl;
	}
	else
	{
	cout<<"length of character is "<<len<<endl;
	cout<<"character is "<<*ptr<<endl;
	}
}
string1::string1()
{
	len=1;
	ptr=new char[len];
	*ptr='S';

}
 string1::string1(char* s)
{
	len=strlen(s);
	ptr=new char[len+1];
	strcpy(ptr,s);
}
string1::string1(char c,int len)
{
	int i;	
	this->len=len;
	ptr=new char[len+1];
	for(i=0;i<len;i++)
	{
		ptr[i]=c;
	}
	ptr[len]='\0';
	
}
string1::string1(int len)
{
    cout<<"Randomly entered len in constructor"<<endl;
	ptr=new char[len+1]; // dynamic allocation on heap
	cout<<"enter string\n";
	cin>>ptr;
    this -> len = strlen(ptr);

}
int main()
{
	string1 s1;
	s1.display();
	string1 s2("rahul");
	s2.display();
	string1 s3('*',80);
	s3.display();
	string1 s4(5);
	s4.display();
    return 0;
}
//no need to call explicit destructor.when the scope of object gets over,user defined //destructor will call implicitly
 //.implicitlyt
	/*s1.~string1();
	s2.~string1();
	s3.~string1();
	s4.~string1();*/