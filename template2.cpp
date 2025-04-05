/*this program is for single template and multiple parameters.*/
#include<iostream>
#include<conio.h>
using namespace std;
template <class t1,class t2>
class k{
	t1 a;
	t2 b;
	public:
	k(t1 x,t2 y)
	{
		a=x;
		b=y;
		cout<<"value of 1st arg:"<<a<<endl<<"vlaue of 2nd arg:"<<b<<endl;
	}
};

//mutiple parameterized template function.
//void fun(t1 a,t2 b)
//{
//	cout<<"first value:"<<a<<endl;
//	cout<<"second value:"<<b<<endl;
//}

main()
{
	k <int,string> k1(23,"karan");
//	fun(51,'a');
	getch();
	return 0;
}
