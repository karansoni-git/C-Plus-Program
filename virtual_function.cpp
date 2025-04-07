#include<iostream>
#include<conio.h>
using namespace std;
class Base 
{  
public: 
virtual void show() 
	{ 
		cout<<"I am base class" << endl ; 
	}
}; 
class Derived : public Base 
{ 
public: 
void show() 
	{ 
		cout<<"I am derived class" << endl ; 
	}
}; 
main() 
{ 
Base b ; 
Derived d; 
Base *ptr;//creating base class pointer 
ptr=&b;//assigning object of Base class
ptr->show();//calling through the pointer and arrow operator.
ptr=&d;//assigning again object of Derived class.
ptr->show();
getch(); 
return 0; 
}

