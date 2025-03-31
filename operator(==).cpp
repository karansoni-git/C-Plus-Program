#include<iostream>
#include<conio.h>
using namespace std;
class k{
	int a;
	public:
	void getdata()
	{
		cout<<"enter value:";
		cin>>a;
	}
	void prt()
	{
		cout<<a<<endl;
	}
	k operator ==(k ref)
	{
		k temp;
		if(a==ref.a)
		{
		temp=ref;
		cout<<"same!";
		return temp;
		}
		else
		{
			cout<<"no same value!";
		}
	}	
};
main()
{
	k k1,k2;
	k1.getdata();
	k2.getdata();
	k1.prt();
	k2.prt();
	k1==k2;

	getch();
	return 0;
}
