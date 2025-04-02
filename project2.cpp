#include<iostream>
#include<conio.h>
using namespace std;
class j{
	protected:
	int age;
	string name;
	public:
		void p()
		{
			cout<<"name: "<<name<<endl<<"age: "<<age;
		}
};
class k:public j
{
	public:
	void q()
	{
		cout<<"enter here:";
		getline(cin,name);
		cin>>age;	
	}	
};
int main()
{
	j j1; 
	k k1;
	k1.q();//collect data in derived class
	k1.j::p();//print data in base class.
	getch();
	return 0;
}
