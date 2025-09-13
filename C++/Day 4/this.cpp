#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
	void show();
	date(int,int,int);
	date();
};
date::date()
{
	this->dd=this->mm=this->yy=0;
}
 date::date(int dd,int mm,int yy)
{
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
}
 void date::show()
 {
	 cout<<"date is "<<this->dd<<"/"<<this->mm<<"/"<<yy<<endl;
 }
 int main()
{
	date d1(1,1,1);
	d1.show();
	date d2(2,2,2);
	d2.show();
}