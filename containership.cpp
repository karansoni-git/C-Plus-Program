/*An object can be accessed inside another class is called containership.
Containership is the ability of a class to contain objects of different classes as member data.
Containership and Inheritance deal with providing additional properties or behavior to a class.*/
#include<iostream>
#include<conio.h>
using namespace std;
class B1{
	protected:
	int a;
	B1()
	{
		cout<<"enter a:";
		cin>>a;
		cout<<a<<endl;
	}
};
class B2{
	protected:
	int b;
	B2()
	{
		cout<<"enter b:";
		cin>>b;
		cout<<b<<endl;
	}
};
class D:public B1,public B2
{
	public:
	void prt()
	{
	B1 b1;
	B2 b2;
	}
};
main()
{
	D d1;
	getch();
	return 0;
}
