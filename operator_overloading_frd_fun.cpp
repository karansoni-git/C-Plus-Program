#include<iostream>
#include<conio.h>
using namespace std;
class k{
	int a;
	public:
	void gtd()
	{
		cout<<"enter a number:";
		cin>>a;
	}
	void prt()
	{
		cout<<a;
	}
	friend k operator +(k,k);
};
k operator +(k r1,k r2)
{
	k temp;
	temp.a=r1.a+r2.a;
	return temp;
}
main()
{
	k k1,k2,k3;
	k1.gtd();
	k2.gtd();
	k3=k1+k2;
	k3.prt();
	getch();
	return 0;
}
