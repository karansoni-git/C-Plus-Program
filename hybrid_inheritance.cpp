#include<iostream>
#include<conio.h>
using namespace std;
class person{
	protected:
	string name,clg;
	public:
	void getdata()
	{
		clg="christ college";
		cout<<"ENTER YOUR NAME:";
		cin>>name;
	}
};
class student:public person{
	protected:
	int rollno;
	public:
	void sdetail()
	{
		cout<<"ENTER YOUR ROLLNO:";
		cin>>rollno;
	}
	void psdetail()
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"ROLLNO:"<<rollno<<endl;
		cout<<"COLLEGE:"<<clg<<endl;
	}
};
class teacher:public person{
	protected:
	int idno;
	string subject;
	public:
	void tdetail()
	{
		cout<<"ENTER YOUR SUBJECT:";
		cin>>subject;
		cout<<"ENTER YOUR ID NO:";
		cin>>idno;
	}
	void ptdetail()
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"ID NO:"<<idno<<endl;
		cout<<"SUBJECT:"<<subject<<endl<<"COLLEGE:"<<clg<<endl;		
	}
};
class gradestudent:public student{
	protected:
	string deg;
	public:
	void gsdetail()
	{
		cout<<"ENTER YOUR DEGREE:";
		cin>>deg;
	}
	void pgsdetail()
	{
		cout<<"NAME:"<<name<<endl;
		cout<<"DEGREE:"<<deg<<endl<<"COLLEGE:"<<clg<<endl;
	}
};
class ta:public student,public teacher{

};
main()
{
	student s1;
	s1.getdata();
	ta t1;
	t1.sdetail();
	t1.tdetail();
	t1.ptdetail();
	getch();
	return 0;
}
