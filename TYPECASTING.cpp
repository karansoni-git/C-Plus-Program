/*Implicit/Automatic Type Conversion
Done by compiler on its own
Expressions containing more than one data type

Type rank:
bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> 
float -> double -> long double

char to double poosible 
but double to char is not poosible you might lose data.
Can result in loss of information like sign, overflow.
*/
#include<iostream>
#include<conio.h>
#include<typeinfo.h>
using namespace std;
main()
{
	int a=10;
	char b='A';
	//implicit typecasting where typecasting perform automatically.
	cout<<"this is a implicit typecasting method\n";
	cout<<"before:";
	cout<<typeid(a).name()<<endl;
	float a2=a;
	cout<<"after tyecasting:";
	cout<<a2<<endl;
	cout<<"and type is:";
	cout<<typeid(a2).name()<<endl;
	/* typeid(variable name).name(); <--this is a function that shows the typeof variable and its consist
	inside #include<typeinfo.h> header file */
	cout<<"before typecasting of variable b:";
	cout<<b<<endl;
	int b2=b;
	cout<<"after typecasting:";
	cout<<b2<<endl;
	cout<<"\n\nthis is a explicit typecasting method\n";
	/* in this method we have to give individual new datatype to specific variables.
	explicit conversion can be done by two methods 
	1.by assignment
	2.by cast operator.
		1.static cast
		2.const cast
		3.dynamic cast
		4.reinterpret cast*/
	int c=66;
	float d=95.424;
	cout<<"type of c:";
	cout<<typeid(c).name()<<endl;
	cout<<"type of d:";
	cout<<typeid(d).name()<<endl;
	//typecasting
	/*syntax:
	  data-type variable-name=(datatype) expression
	  here LHS data-type variable hold value that converted in RHS*/
	char c2=(char)c;//changing integer to character.
	int d2=(int)d;//changing float to integers.
	cout<<c2<<endl<<d2;
	getch();
	return 0;
}
