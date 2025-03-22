//copy constructor help to get another copy value of same constructor.
#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	int a,b;
	public:
	k()
	{
		a=100;
		b=200;
		cout<<"normal constructor:"<<endl;
		call();
	}
	public:
		void call()
		{
			cout<<a<<endl<<b<<endl;	
		}
	public:
//		k(k &reference)
		k(k &c1)
		{
			cout<<"copy:"<<endl<<c1.a<<endl<<c1.b<<endl;//calling value by reference variable  
		}
};
int main()
{
	k k1;
	k k2=k1;//first way to calling copy constructor
	k k3(k1);//second way to calling copy constructor
	getch();
	return 0;
}
