/*template is a mechanism that make it possible to use one class and one function 
to handle many data type 
template is a one kind of frame or procedure which can be use for any data type
we dont declare data type of member data and member function we will give that data
type while creation of object .it will assign that data-type to all class member 
and functions
template is use for competitive coding.
with help of template we can create generic and parameterized classes.
-->class is actually a instance of template. 
=>syntax:
template <class t1>
class k{body...}
k <int()any other data type> k1*/
#include<iostream>
#include<conio.h>
using namespace std;
template <class t1>
class k{
	t1 a; //here t1 will be any user defined data type.
	public:
	k(t1 a)
	{
		cout<<"value:"<<a;		
	}
//	void fun();
};
//template function declared outside the class.
//void k<t1>::fun(){...}
main()
{
	k<float>k1(10.45);
	cout<<endl;
	k<int>k2(10);
	getch();
	return 0;
}

//now we are creating a function template.
//template<class t>
//void addnum(t a,t b)
//{
//	t c=a+b;
//	cout<<"sum of number:"<<c<<endl;
//}
//main()
//{
//	addnum(12,20);
//	addnum(10.24,32.1556);
//}
