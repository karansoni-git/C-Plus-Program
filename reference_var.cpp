#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=100;
	int &ref=a;//this reference variable simply a copy or duplicate of original variable
	cout<<a<<endl<<ref<<endl;
	cout<<&ref<<endl<<&a;
	getch();
	return 0;
}
