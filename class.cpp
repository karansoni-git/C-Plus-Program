#include<iostream>
#include<conio.h>
using namespace std;
class info
{
	//by default class properties is private.
	private:
	int age;
	string name;
	string city;
	
	public:
	void user()
	{
		cout<<"enter age: ";
		cin>>age;
		cout<<"enter name: ";
		cin>>name;
		cout<<"enter city: ";
		cin>>city; 	
		cout<<endl;
		pr();
	}	
	
	void pr()
	{
		cout<<"name: "<<name<<endl<<"age: "<<age<<endl<<"city: "<<city<<endl;
	}
};
int main()
{
	info p1,p2;
	cout<<"first member: "<<endl;
	p1.user();
	cout<<endl;
	cout<<"second member: "<<endl;
	p2.user();
	getch();
	return 0;
}
