#include<iostream>
#include<conio.h>
using namespace std;
class k{
	int age;
	char name[10];
	public:
		void gtd()
		{
			cout<<"enter name & age:"<<endl;
			cin>>name>>age;
			cout<<endl;	
			cout<<"Name:"<<name<<endl
				<<"Age:"<<age<<endl;
		}
};
main()
{
	k k1;//creating object for class.
	k *ptr=&k1; //create pointer that type is K(class) which store address of object.
	ptr->gtd(); //accessing property through arrow operator.
	
	//pointer to array of object.
//	k k1;
//	k *ptr=new k[3];
//	ptr->gtd();
//	cout<<endl;
//	(ptr+1)->gtd();
//	cout<<endl;
//	(ptr+2)->gtd();

	getch();
	return 0;
}
