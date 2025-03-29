#include<iostream>
#include<conio.h>
using namespace std;
class k{
	int a;
	public:
		k()
		{
			a=0;
		}
		void operator ++()
		{
			++a;
		}
		void prt()
		{
			cout<<a<<endl;
		}
};
main()
{
	k k1,k2;
	k1.prt();
	++k1;
	++k1;
	k1.prt();
	k2.prt();
	++k2;
	++k2;
	++k2;
	k2.prt();
	getch();
	return 0;
}


//this is program which return a value in operator function.
/*class k{
	int x;
	public:
	test()
	{
	x=0;	
	} 
	void prt()
	{
		cout<<x<<endl;
	}
	k operator ++() //K is return type
	{
		k b; //local variable for accessing value x
		b.x=++x;  //here in b.x is x variable which we declare at starting 
		return b;//return b whith contain value of x
	}
};
main()
{
	k k1,k2;
	k1.prt();
	++k1;
	++k1;
	k1.prt();
	k2.prt();
	++k2;
	++k2;
	k2.prt();
	getch();
	return 0;
}*/


/*
int count=0;
class k{
	int a;
	public:
		void getdata()
		{
			cout<<"enter a number:";
			cin>>a;
			cout<<endl;
		}
		k operator ++()
		{
			k b;
			b.a=++a;
			count++;
			return b;
		}
		void prt()
		{
			cout<<"value of a:"<<a<<endl;
			cout<<"increment by:"<<count;
		}
};
main()
{
	k k1;
	k1.getdata();
	++k1;
	++k1;
	++k1;
	k1.prt();
	getch();
	return 0;
}*/
