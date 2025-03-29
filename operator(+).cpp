//this is program of + operator overloading.for addition of object value
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
		//it returns value which is class type that's why we write (k k2).
		k operator +(k k2)//return-type operator +(class name formal variable).
		{
			k p; //local variable for storing addition value.
			//here we already have a variable 
			p.a=a+k2.a; //after + sign variable is second parameter which is object k2 of class k.
			return p;
		}
		void ptr()
		{
			cout<<"addition:"<<a;
		}
};
main()
{
	k k1,k2,k3;
	k1.getdata();
	k2.getdata();
	k3=k1+k2;
	k3.ptr();
	getch();
	return 0;
}


//this program is string concatenation by operator overloading.
/*
class k{
	string a;
	public:
	k()
	{
		cout<<"enter a string:";
		getline(cin,a);
		cout<<endl;
	}
	void prt()
	{
		cout<<a;
	}
	void operator +(k ref)
	{
		a=a+ref.a;
	}
};
main()
{
	k k1,k2;
	k1+k2;
	k1.prt();	
	getch();
	return 0;
}
*/
