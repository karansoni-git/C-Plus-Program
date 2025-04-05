#include<iostream>
#include<conio.h>
using namespace std;
class A1{
	public:
		void fun()
		{
			cout<<"i am inside A1 class";
		}
};

class A2{
	public:
		void fun(int num)
		{
			cout<<"i am inside A2 class "<<num;
		}
};

class test : public A1, public A2
{
	public:
		void testing()
		{
			fun(12);
		}
};

int main()
	{
		test t;
		t.testing();
		getch();
		return 0;
	}
