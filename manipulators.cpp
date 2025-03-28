//all manipulator function contained in iomanip.h header file.
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	//setw() function set a width to output as like cout.width();
	//endl and ends is aslo a manipulator.
	cout<<"setw():"<<endl;
	cout<<setw(8)<<"5433"<<endl;
	//setfill() to fill empty width in output with any character.
	cout<<"setfill():"<<endl;
	cout<<setw(8)<<setfill('*')<<"5433"<<endl;
	//setiosflags() to set alignment of output.
	cout<<"setiosflags():"<<endl;
	cout<<setw(8)<<setfill('X')<<setiosflags(ios::left)<<"5433"<<endl;
	//resetiosflags() to reset the alignment of output.
	cout<<"resetiosflags():"<<endl;
	cout<<setw(8)<<setfill('X')<<resetiosflags(ios::left)<<"5433"<<endl;
	//setprecision() set decimal value after floating point in float value.
	cout<<"setprecision():"<<endl;
	cout<<setprecision(3)<<34.5421<<endl;
	cout<<"setprecision():fixed"<<endl;
	cout<<setprecision(2)<<fixed<<34.5421<<endl;
	//setbase() to convert the base of number like decimal to ocatal.
	cout<<"setbase():"<<endl;
	cout<<"decimal:"<<26<<setbase(16)<<" to hexa:"<<26<<endl;
	//or write directly a number system name to convert into it.
	cout<<"direct convert:"<<endl;
	cout<<hex<<16<<" "<<oct<<20<<endl;
	getch();
	return 0;
}	
