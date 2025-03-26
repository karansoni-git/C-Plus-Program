//this is a program of single inheritance.
//in heritance method we have only one base class and one derived class is called single inheritance
/*in inheritance concept if we create constructor in both class base and derived so base class
constructor will run first and derived after it
-->in destructor child class destructor run first and base class after it*/
#include<iostream>
#include<conio.h>
using namespace std;
class p
{
	protected:
	string fname;
	string sname;
	protected:
		void join(){
			string fname="sanjaybhai";
			string sname="soni";
			cout<<sname<<" "<<fname;
		}
};
class s:p      //here we have declared derived class of p
{
	string name;
	public:
	void in()
	{
		cout<<"enter your name: ";
		cin>>name;
		cout<<name<<" ";
		join();
	}
};
int main()
{
//	p p1;
//	p1.join();//can't access because join is protected.
	s s1;
	s1.in();
	getch();
	return 0;
}
