#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	public:
		int a=10;
		void pr1()
		{
			cout<<a;
		}
	
	private:
		int b=20;
		void pr2()
		{
			cout<<b;
		}
	
	protected:
		int c=30; 
		void pr3()
		{
			cout<<c;
		}
};

main()
{
	k k1;
	k1.pr1();
	getch();
}
