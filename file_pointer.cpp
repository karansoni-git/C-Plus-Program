/*file pointer is a built in function which are member fnctions of ifstream and
ofstream.this are file pointers:
1)get pointer is for getting location of read pointer.
-->seekg(),tellg() member function of ifstream.
2)put pointer is for getting a location of write pointer
-->seekp(),tellp() member function of ofstream.*/
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
//	ofstream out;
//	out.open("file_p.txt",ios::app);
//	out<<"this is a pointer in file ";
//	//tellp() return a current location of write pointer. 
//	cout<<"current pointer location:"<<out.tellp();
//	//seekp() reach at any location in file for write operation
//	out.close();
//	ofstream out1;
//	out1.open("file_p.txt",ios::app);
//	out1.seekp(0,ios::beg);
//	cout<<endl;
//	cout<<"new location:"<<out1.tellp();
//	out1<<"reach to the begining! ";
//	out1.close();
	
//	ifstream in;
//	in.open("file_p.txt",ios::in);
//	if(!in)
//	{
//		cout<<"error while opening";
//	}
//	char a[50],b[50],c[50],d[50];
//	in.getline(a,50);
//	cout<<a<<endl;
//	in.seekg(5,ios::beg);//moving get pointer to 5th position from begining.
//	cout<<"current location:"<<in.tellg();
//	cout<<endl;
//	in.getline(b,50);
//	cout<<b<<endl; //printing data from begining 5th position.
//	in.seekg(-10,ios::end);//moving get pointer to backward from end.
//	cout<<"current location:"<<in.tellg();
//	cout<<endl;
//	in.getline(c,50);
//	cout<<c<<endl; 
//	in.seekg(-7,ios::cur);//moving get pointer 3 bytes from current position.
//	cout<<"cureent location:"<<in.tellg();
//	cout<<endl;
//	in.getline(d,50);
//	cout<<d<<endl; 
//	in.close();
//	getch();
//	return 0;
}
/*these are some reference pointer which direct jump to specific locations.
1)ios::beg =>reach to start of file 
2)ios::cur =>reach to current location of file.
3)ios::end =>reach to end of file.*/
