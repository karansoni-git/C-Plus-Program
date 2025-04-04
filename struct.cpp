#include<iostream>
#include<string.h>
using namespace std;
struct kp
{
	int id;
	string name;
	double salary;
}dt;
main()
{
	cout<<"enter your name:";
	getline(cin,dt.name);
	cout<<"enter your id no:";
	cin>>dt.id;
	cout<<"enter your salary:";
	cin>>dt.salary;
	cout<<"Name:"<<dt.name<<endl<<"Id:"<<dt.id<<endl<<"Salary:"<<dt.salary;
	return 0;
}
