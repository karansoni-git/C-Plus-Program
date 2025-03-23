/*these all are formatted input and output function.
now what is formatted i\o function ,so the function which is use to formatting the output
of program is called formatting i\o function
can format the output by three ways
1.ios class functions and flags
2.manipulators
3.user-defined output functions*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
//this all functions are member function of ios class.
//width() function add width in output (total width-given width)=add to output.
//	cout<<"before adding width:"<<endl;
//	cout<<"5433"<<endl;
//	cout<<"after adding width:"<<endl;
//	cout.width(6);
//	cout<<"5433"<<endl;

	//cout.precision() print decimal value after floating point in float value.
//	float a=12.453442,b=3.543644;
//	cout<<a<<endl;
//	cout.precision(2);
//	cout<<fixed;
////if we don't write fixed then it will consider whole value size as given ,but if we 
//fixed then
////it will print that size after floating point.
//	cout<<a<<endl;
//	cout<<b;

//	cout.fill() function fill the empty width with any character.
//	cout<<6305<<endl;
//	cout.width(12);//first give an extra width
//	cout.fill('*');//then add fill any character to empty width.
//	cout<<6305;

//	cout.setf() function is help to align the output.
//	cout.setf(arg1,arg2); first argument is type of alignment and second is mask of type
	char a[10]="karan";
	cout.width(10);
	cout.fill('*');
	cout.setf(ios::left,ios::adjustfield);
	cout<<a;
	getch();
	return 0;
}

