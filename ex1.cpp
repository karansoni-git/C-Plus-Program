#include<iostream>
#include<conio.h>
using namespace std;
class a{
	public:
		int x;
		void in()
		{
			cin>>x;
		}
		void out()
		{
			cout<<x<<endl;
			x++;
		}
};
int main()
{
	a a1;
	a1.in();
	a1.out();
	a1.out();
	a1.out();
	getch();
	return 0;
}
