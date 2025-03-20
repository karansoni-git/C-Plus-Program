/*constructor is a special member function which is declared inside class and it's
name is same as class name 
here we have three types of constructor:
1.default constructor
2.parameterized constructor
3.copy constructor */
/*default constructor:a constructor with no arguments or parameter is called 
default constructor. */
//this is an example of default constructor.
#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	int a,b;
	public:
		k()  //constructor always has same name as class name. 
		{
			cout<<"enter a and b: "<<endl;
			cin>>a>>b;
			cout<<"addition:"<<a+b<<endl;
		}
		~k() //destructor start with ~ tilde sign 
		{
			cout<<"programm end!"<<endl;
			cout<<"destroyed successfully!";
		}
};
int main()
{
	k k1; //implicit calling of constructor.
//	k k1=k(); //explicit calling of constructor.
	getch();
	return 0;
}


//class k
//{
//	int age;
//	string name;
//	public:
//		k()//constructor
//		{
//			cout<<"enter name: ";
//			getline(cin,name);
//			cout<<"enter age: ";
//			cin>>age;
//			dis();
//		}
//		void dis()
//		{
//			cout<<"name is: "<<name<<endl<<"age is: "<<age;
//		}
//};
//int main()
//{
//	k k1;
//	getch();
//	return 0;
//}
