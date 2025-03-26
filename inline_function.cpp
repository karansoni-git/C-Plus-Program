#include<iostream>
#include<conio.h>
using namespace std;
/*inline function is not special but it's run fast compare to normal function
because in inline is go to main function while in normal function control of program
come to the specific function that's make delay and time consuming on big scale project
inline function is best when function size is short and that function frequently used
in program*/
inline void fun(int x,int y)
{
	cout<<(x>y? x:y); 
}
int main()
{
	int a,b;
	cout<<"enter a: ";
	cin>>a;
	cout<<"enter b: ";
	cin>>b;
	cout<<"greater is: ";
	fun(a,b);
	getch();
	return 0;
}
