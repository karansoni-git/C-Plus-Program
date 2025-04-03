#include<iostream>
#include<conio.h>
using namespace std;
int x = 1000;
main()
{
	int x=100;
	{
		int x=10;
		cout<<x<<endl;
	}
	cout<<x<<endl<<::x;
	getch();
	return 0;
}
