/*parameterized constructor:a constructor which accepts a parameter is called
parameterized constructor*/
#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	public:
		int a,b;
	public:
		k(int x,int y)
		{
			add();
			cin>>x>>y;
			a=x;
			b=y;
			cout<<"addition: "<<a+b;
		}
		public:
			void add()
			{
				cout<<"enter a and b: "<<endl;
			}
};
int main()
{
	k k1(k1.a,k1.b);
	getch();
	return 0;
}
