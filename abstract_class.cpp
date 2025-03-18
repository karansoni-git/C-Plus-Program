/*A class from which we would never want to create objects is called and abstract class.
if we create abstact class then we can not create an object for that class.
create pure virtual function inside class so it will be act as an abstract class.
abstact class is created just for only deriving property and methods to subclasses.*/
#include<iostream>
#include<conio.h>
using namespace std;
class abs{
	private:
	string owner;
	int age;
	protected:
	void personal_info()
	{
		owner="karan soni";
		age=20;
		cout<<"name of owner:"<<owner<<endl<<"age:"<<age<<endl;
	}
	void virtual info()=0;
};
class d:public abs{
	public:
	void info()
	{
		personal_info();
	}
};
main()
{
	d d1;
	d1.info();
	getch();
	return 0;
}
