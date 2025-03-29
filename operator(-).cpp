//this program converting negative value into positive and positive into negative value.
#include<iostream>
#include<conio.h>
using namespace std;
/*
class k{
	int x,y,z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void prt()
		{
			cout<<"values:"<<x<<" "<<y<<" "<<z<<endl;
		}
		k operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
main()
{
	k k1;
	k1.getdata(-11,-12,13);
	k1.prt();
	-k1;
	cout<<"after (-)operator overloading"<<endl;
	k1.prt();
	getch();
	return 0;
}*/

class k{
	int a;
	public:
		void getdata()
		{
			cout<<"enter value:";
			cin>>a;
		}
		k operator -(k k2)
		{
			k b;
			b.a=a-k2.a;
			return b;
		}
		void ptr()
		{
			cout<<"subtraction:"<<a;
		}
};
main()
{
	k k1,k2,k3;
	k1.getdata();
	k2.getdata();
	k3=k1-k2;
	k3.ptr();
	getch();
	return 0;
}
