#include<iostream>
#include<conio.h>
using namespace std;
class p
{
	public: 
	class c
	{
		public:
		string name;
		public:
		void fun()
		{
			cout<<"enter your name: ";
			getline(cin,name);	
			cout<<"name: "<<name<<endl;
		}	
	}c1;
	void show()
	{
		cout<<"parent name: ";
	}
}p1;
main()
{
	//first way
	p::c f1;
	f1.fun();
	//second way to call nested class value.
//	p1.c1.fun();
//	p1.show();
	getch();
}
