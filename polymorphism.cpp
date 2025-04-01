/*polymorphism:whenever we treat an object in different different way it's called 
polymorphism 
1.compile-time polymorphism
2.run-time polymorphism
*/
//it's also an example of overloading
//where in overloading we also use same name function multiple time
//but we add some parameter in that function.
//here it's a compile-time polymorphism.
#include<iostream>
#include<conio.h>
using namespace std;
void add()
{
	int a=10,b=20;
	cout<<a+b<<endl;
}
void add(int a,int b)
{
	cout<<a+b<<endl;
}
void add(int a,int b,int c)
{
	cout<<a+b+c;
}
main()
{
	add();
	add(10,15);
	add(20,30,50);
	getch();
	return 0;	
}
