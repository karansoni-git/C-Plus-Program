/*in hierarchical inheritance have only one base class which share its property to multiple
derived class
simply one parent and many children*/
#include<iostream>
#include<conio.h>
using namespace std;
class Base{
	public:
	string course;
	void setc1()
	{
		course="BCA";
		cout<<course<<endl;
	}
	void setc2()
	{
		course="BBA";
		cout<<course<<endl;
	}
	void setc3()
	{
		course="B.COM";
		cout<<course<<endl;
	}
};
class D1:public Base{
	public:
	string sname;
	int sroll;
	void sdetail()
	{
		cout<<"ENTER STUDENT NAME:";
		getline(cin,sname);
		cout<<"ROLLNO:";
		cin>>sroll;
	}
};
class D2:public Base{
	public:
	string tname;
	int tid;
	void tdetail()
	{
		cout<<"ENTER TEACHER NAME:";
		cin>>tname;
		cout<<"IDNO:";
		cin>>tid;
	}
};
main()
{
	D1 s;
	D2 t;
	s.sdetail();
	s.setc1();
	t.tdetail();
	t.setc1();
	getch();
	return 0;
}
