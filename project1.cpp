#include<iostream>
#include<conio.h>
using namespace std;
class vehicles{
	
	protected:
	string a="petrol";
	string b="diesel";

	protected:
		void p1()
		{
			cout<<a<<endl;
		}
		void p2()
		{
			cout<<b<<endl;
		}
};
class two:vehicles
{
	public:
		two()
		{
			bike();
			moped();
		}
	public:
	void bike()
	{
		cout<<"bikes:";
		cout<<"only -- ";
		p1();
		cout<<endl;
	}
	void moped()
	{
		cout<<"mopeds:";
		cout<<"only -- ";
		p1();
		cout<<endl;
	}
};

class four:vehicles
{
	public:
		four()
		{
			car();
			truck();
			cout<<endl;
		}
	public:
		void car()
		{
			cout<<"cars:"<<endl;
			p1();
			p2();
			cout<<endl;
		}
		void truck()
		{
			cout<<"trucks:"<<endl;
			p1();
			p2();
		}
};
int main()
{
	two t1;
	four f1;
	getch();
	return 0;
}
