/*in multi-level inheritance one class share property to another class and another class share all
property of thier class and previous class to next class thus multi-level inheritance create*/
#include<iostream>
#include<conio.h>
using namespace std;
class a{
	public:
	string clgname,city;
	void setdata()
	{
		clgname="christ collge";
		city="rajkot";
	}
};
class b:public a
{
	public:
	string name;
	void getdata()
	{
		cout<<"enter your name:";
		getline(cin,name);
	}	
};	
class c:public b
{
	public:
	string course;
	void prt()
	{
		string course="BCA";
		cout<<"NAME:"<<name<<endl;
		cout<<"COLLEGE NAME:"<<clgname<<endl;
		cout<<"COURSE:"<<course<<endl;
		cout<<"LOCATION:"<<city<<endl;	
	}	
};
main()
{
	c c1;
	c1.getdata();
	c1.setdata();
	c1.prt();
	getch();
	return 0;
}
