#include<iostream>
#include<conio.h>
using namespace std;
class karan{
	int money;
	friend void krish(karan);//declaration of friend function
//friend return-type function_name(current class name it will consider as argument)
	void hello()
	{
		cout<<"hello all";
	}
};
//here we we give class name and create one refrence
//void friend_func_name(class-name refrence)
void krish(karan k1)//function structure--
{
	cout<<"enter money: ";
	cin>>k1.money;
	cout<<"amount is: "<<k1.money<<endl;
	k1.hello();
}
main()
{
	karan f1;//creating object of class
	krish(f1);//use object of class karan as a parameter.
	getch();
	return 0;
}
