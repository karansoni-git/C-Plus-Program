//this is a program of template function overloading.
#include<iostream>
#include<conio.h>
using namespace std;
void fun()
{
	cout<<"fisrt function(non-type template)"<<endl;
}
template <class t>
void fun(t a)
{
	cout<<"second function:(template's variable):"<<a<<endl;
}
template <class p>
void fun(p a,p b)
{
	cout<<"third function:(template's two same data-type variable)"<<a<<" "<<b<<endl;	
}

template <class x,class y>
void fun(x a,y b)
{
	cout<<"fourth function:(template's two different data-type variable):"<<a<<" "<<b<<endl;
}
main()
{
	fun();
	fun(195);
	fun(16,12);	
	fun("karan","soni");
	fun('D',20);
	getch();
	return 0;
}
