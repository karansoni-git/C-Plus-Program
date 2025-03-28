/*in multiple inheritance one derived class have property of multi class(more than one)that's why its called 
multiple inheritance
in multiple inheritance child is one but parent class or base class is multiple.*/
#include<iostream>
#include<conio.h>
using namespace std;
class a1{
	public:
	string cname,city;
	void setdata1()
	{
		cname="google";
		city="london";
	}
	void setdata2()
	{
		cname="microsoft";
		city="ohio";
	}
};
class a2{
	public:
	string jobname;
	void jobtitle1()
	{
		jobname="SDE-1";
	}
	void jobtitle2()
	{
		jobname="DEVELOPER";
	}
};
class D:public a1,public a2
{
	public:
	string ename;
	void prt()
	{
		cout<<"enter employee name:";
		getline(cin,ename);
		cout<<endl;
		cout<<"EMPLOYEE NAME:"<<ename<<endl;
		cout<<"COMPANY NAME:"<<cname<<endl;
		cout<<"LOCATION:"<<city<<endl;
		cout<<"JOBNAME:"<<jobname<<endl;
	}
};
main()
{
	D d1;
	d1.setdata1();
	d1.jobtitle1();
	d1.prt();
	cout<<endl;
	d1.setdata2();
	d1.jobtitle2();
	d1.prt();
	getch();
	return 0;
}
