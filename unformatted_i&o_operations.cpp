//this all are unformatted input and output function in iostream.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
/*cin is object of istream ,get is also member function of istream.*/
//	char a,b;
//	cout<<"get():"<<endl;
//	cout<<"enter for a:";
//	cin.get(a); //character will store in variable a.
//	cout<<"1st value:"<<a<<endl;
	
//	b=cin.get(); //assigning value to variable b.
//	cout<<"2nd:"<<b<<endl;
	
/*cout is an object of ostream class*/
//	char x='a';
//	char y;
//	char z=65;
//	cout<<"put():"<<endl;
	
//printing single charaacter 'K' through the put and cout.
//	cout<<"value in x:";
//	cout.put('k'); 
//	cout<<endl;
//	
//	cout<<"x:";
//	cout.put(x); //passing variable.
//	cout<<endl;
//	
//	cout<<"enter value for y:";
//	cin.get(y); //user define 
//	cout.put(y);
//	cout<<endl;
//	
//	cout<<"ascii 66 into character:";
//	cout.put(z); //answer is => A.


/*-->getline();
getline is an input function.its allows a white space and tab for input.
=>imp:also allows a new line but it will convert new line into null.
syntax: cin.getline( line, size ); */
//	char name[20]; //size of char variable name
//	cin.getline(name,10); //passing first variable name and no of char to be inserted.
//	cout<<name;


/*using getline() with string.*/
//	string name;
//	getline(cin,name);
//	cout<<name;

/*read is an input function of istream class 
it print all character means it not assign null value to the last character.*/	
//	char chk[10];
//	cin.read(chk,8);
//	cout<<chk;

/*write() is a output function and member function of ostream and use with cout object.
it is use for printing a sentence or specified characters of string.
its print space and tab
syntax: cout.write(variable name,size);
*/
//	char k[20];
//	cin.getline(k,20);
//	cout.write(k,10); 	
/*get and put is use for single character input and output
while getline and write is use for string means sequence of characters input and output*/
	

	
//-->cerr and clob is object of ostream and use for printing a error in console.
//	string err="this is an error in syntax";
//	cerr<<"this is an error\n";
//	cerr<<err<<endl;
//	clog<<"another erroe is found";
/*now what is a difference is between cerr and clog is clog has a buffer that's why it can 
store an error and we can use it in future*/
	getch();
	return 0;
}
