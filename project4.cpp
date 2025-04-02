#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	static int age;
	
	public:
		void inc()
		{
			age++;
		}
		void call()
		{
			cout<<"age: "<<age<<endl;	
		}		
};
int k::age=19;
main()
{
	k k1;
	k1.call();
	k1.inc();
	k1.call();
	getch();
	return 0;
}
