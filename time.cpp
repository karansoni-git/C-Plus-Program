#include<iostream>
#include<conio.h>
using namespace std;
class k{
	public:
	int a;
	float hours,minutes;
	k()
	{
		cout<<"enter a number:";
		cin>>a;
		hours=a/60;
		minutes=a%60;
	}
	void prt()
	{
		cout<<"hours:"<<hours<<" minutes:"<<minutes<<endl;
	}
};
main()
{
	k k1;
	k1.prt();
	getch();
	return 0;
}
