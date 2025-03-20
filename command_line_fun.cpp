/*main() is the important function in c/c++ we can use this function in command shell
of operating system.
syntax of command line function:
int main(int argc, char *argv[]) { .......} 
=>int argc is the first argument of function which returns number of argument pass
in the function.
=>int argv is character array in function which return a string value 
first string is always a name of program at 0 index and other is user defined.*/
#include<iostream>
#include<conio.h>
using namespace std;
main(int argc,char *argv[])
{
	cout<<"number of arguments:"<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"index: "<<i<<" and value:"<<argv[i]<<endl;
	}
	getch();
	return 0;
}
