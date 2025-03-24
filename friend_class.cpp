#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	int a=10,b=20;
	public:
	void add()
	{
		int c=a+b;
		cout<<"addition :"<<c;
	}
	friend class s;
};
class s{
	public:
	void dis(k r1)
	{
		cout<<r1.a<<" "<<r1.b;
	}
	void n()
	{
		cout<<"whats up!";
	}
};
int main()
{
	k k1;//object of class k
	s s1;//object of friend class s
	s1.dis(k1);
	cout<<endl;
	k1.add();
	cout<<endl;
	s1.n();
	getch();
	return 0;
}
