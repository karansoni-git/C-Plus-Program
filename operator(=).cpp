//this is a assignment operator overloading.
#include<iostream>
#include<conio.h>
using namespace std;
class k{
	int a;
	public:
		void getdata()
		{
			cout<<"enter a value:";
			cin>>a;
		}
		void operator =(k ref)
		{
			a=ref.a;
		}
		void prt()
		{
			cout<<"value:"<<a<<endl;
		}
};
main()
{
	k k1,k2;
	k1.getdata();
	cout<<"value of first object"<<endl;
	k1.prt();
	k2=k1;
	cout<<"value of second object"<<endl;
	k2.prt();
	getch();
	return 0;
}

/*this is shorthand assignment operator overloading.
void operator +=();
as += you can use -=,*=,/= etc;*/
/*
class k{
	int a;
	public:
	void getdata()
	{
		cout<<"enter a value:";
		cin>>a;
	}
	void ptr()
	{
		cout<<a;
	}
	void operator +=(k ref)
	{
		a+=ref.a;
	}
};
main()
{
	k k1,k2;
	k1.getdata();	
	k2.getdata();
	cout<<"1st value:";
	k1.ptr();
	cout<<endl;
	cout<<"2nd value:";
	k2.ptr();
	cout<<endl;
	k1+=k2;
	//k1+=k2;
	cout<<"addition:";
	k1.ptr();
	getch();
	return 0;
}
*/
