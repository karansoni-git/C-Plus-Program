/*in inheritance concept we can inheritance a constructor to the derived class
if base class constructor is without parameter then we don't need to create constructor in
derived class
if constructor is parameterized then we have to create constructor in derived class*/
#include<iostream>
#include<conio.h>
using namespace std;
class Base{
	protected:
	int a;
	Base(int x)//base class constructor.
	{
		a=x;
		cout<<"im constructor in base class and i called by derived class"<<endl;
	}
};
class Derived:public Base{
	public:
	//passing derived class constructor formal value to base class constructor
	Derived(int y):Base(y)//derived class constructor.
	{
		//let it empaty
	}
	//that's it very simple.
	void prt()
	{
		cout<<"a:"<<a;
	}
};
main()
{
	Derived d1(12);
	d1.prt();
	getch();
	return 0;
}

/*
class B1{
	protected:
	int a;
	B1(int x)
	{
		a=x;
	}
};
class B2{
	protected:
	int b;
	B2(int y)
	{
		b=y;
	}
};
class D:public B1,public B2{
	protected:
	int c;
	public:
	D(int p,int q,int r):B1(p),B2(q)
	{
		c=r;
	}
	void sum()
	{
		cout<<"ADDITION:"<<a+b+c;
	}
};
main()
{
	D d1(10,20,30);
	d1.sum();
	getch();
	return 0;
}*/
