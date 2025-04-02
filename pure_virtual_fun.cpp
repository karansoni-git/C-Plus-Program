/*pure function is declared by assigning 0 to it.
if we create pure virtual in class then we can not create an object for it.
but you can use their data function and member if its public or through the derived class 
if it is protected
=>if you create pure virtual class then you compulsory have to overwrite this function*/
#include<iostream>
#include<conio.h>
using namespace std;
class k{
	protected:
	int a;
	virtual void kk()=0; //do nothing function -->pure function.	
	public:
	void gtd()
	{
		a=20;
		cout<<a<<endl;
	}
};
class p:public k{
	int b;
	public:
	void kk()
	{
		b=10;
		cout<<b<<endl;
	}
};
main()
{
	p p1;
	p1.kk();
	p1.gtd();
	getch();
	return 0;
}
