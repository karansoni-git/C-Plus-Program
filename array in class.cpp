#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	int a[5],i;
	
	public:
		void ip()
		{
			cout<<"enter any 5 numbers:"<<endl;
			for(i=0; i<5; i++)
			{
				cin>>a[i];
			}
		}
	public:
		void op()
		{
			cout<<endl;
			for(i=0; i<5; i++)
			{
				cout<<a[i]<<" ";	
			}	
		}	
};
main()
{
	k k1;
	k1.ip();
	k1.op();
	getch();
	return 0;
}
