/*'this' is a pointer which point to member data of class 
-->can't use inside friend function*/
#include<iostream>
#include<conio.h>
using namespace std;
class k{
	string name;
	int age;
	int id;
	public:
	void gtd(string name,int age,int id)
	{
		this->name=name;
		this->age=age;
		this->id=id;
		//cout<<"address:"<<this<<endl;
	}	
	void prt()
	{
		cout<<this->name<<endl<<this->age<<endl<<this->id<<endl;
//		cout<<"address:"<<this<<endl; //address of object
	}
};
main()
{
	k k1,k2;
	k1.gtd("karan soni",19,195);
	k1.prt();
	
//	cout<<"address of object:"<<&k1<<endl;
//	cout<<"address of object:"<<&k2<<endl;
	getch();
	return 0;
}
