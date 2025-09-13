#include<iostream>
using namespace std;
class cdate
{
	int dd,mm,yy;
	public:
		// cdate()
		// {
		// 	dd=mm=yy=0;
		// }
		cdate(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		void show()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
        cdate();
};
    cdate :: cdate(int , int ,int)
    {
        cin>>dd>>mm>>yy;

    }
                        
int main()
{
	cdate* ptr1=new cdate();
	ptr1->show();
	delete ptr1;

}