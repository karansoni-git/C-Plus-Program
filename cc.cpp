#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	public:
	int age;
	string name;
	public: 
	k()
	{
		cout<<"enter name: ";
		getline(cin,name);
		cout<<"enter age: ";
		cin>>age;
	}
	~k()
	{
		cout<<"destroyed successfully"<<endl;
		cout<<name<<age;
	}
		void call()
	{
		cout<<"name: "<<name<<endl<<"age: "<<age<<endl;
	}
};
int main()
{
	k k1;
	k1.call();
	cout<<"name & age: "<<k1.name<<" "<<k1.age<<endl;
	getch();
	return 0;
}
