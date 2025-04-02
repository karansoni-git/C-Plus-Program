#include<iostream>
#include<conio.h>
using namespace std;
class p
{
	/*protected data only member function and derived class can access 
	can't access protected data outside the class means not with an object*/
	protected:
		int age;
		string name;
	protected:
		void show()
		{
			cout<<"enter name: ";
			getline(cin,name);
			cout<<"enter age: ";
			cin>>age;
//			cout<<"name: "<<name<<endl<<"age :"<<age;
		}
};
class d:p
{
	public:
	void s()
	{	
		show();
		cout<<"name: "<<name<<endl<<"age: "<<age;
	}
};
int main()
{
	d d1;
	d1.s();
	getch();
}
