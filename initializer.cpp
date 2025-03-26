#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	string name;
	int a;
	public:
		//we initialize a value like this it' called member initializer list(MIL)
	k(): name("karan"),a(19)
	{
		call();
	}
	public:
//	[Error] only constructors take member initializers
		void call()   //: name("karan"),a(19) //can't declared in member initializer to function.
		{
			cout<<"name: "<<name<<endl<<"age: "<<a<<endl;
		}
};
int main()
{
	k k1;
	getch();
	return 0;
}
