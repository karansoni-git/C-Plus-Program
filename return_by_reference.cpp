/*in return by reference we required one global variable
syntax:
return-type & function-name()
example:
int& add()
here this function returns a address of variable which is int type. */
#include<iostream>
#include<conio.h>
using namespace std;
int a;
int& fun();//definition
main()
{
	fun()=5; //input 5 in variable a
	cout<<"after initialize:"<<a;
	getch();
	return 0;
}
int& fun()//declaration
{
	return a;//returns variable a;
}


//int a=20; //initialize 20 to global variable a.
//int& fun();//definition
//main()
//{
//	cout<<a<<endl; //20 bcuz not change anything on it. 
//	int b;
//	b=fun();
//	cout<<b<<endl; //10
//	cout<<a; //value has been changed to 10 in function fun().
//	getch();
//	return 0;
//}
//int& fun()
//{
//	a=10; //assigning new value 10;
//	return a; //returns the address of a.
//}
