#include<iostream>
#include<conio.h>
using namespace std;
void M()
{
	//local scope of class
	class k
	{
		string name;
		int age;
		int mobile;
		
		public:
		void p()
		{
			cout<<"enter name: ";
			getline(cin,name);
			cout<<"enter age: ";
			cin>>age;
			cout<<"enter mobile no: ";
			cin>>mobile;
			cout<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"mobile no: "<<mobile<<endl;
		}
	}call;//object name
	call.p(); //calling function of class.
}
int main()
{
	M();//execute main logic of class through function
	getch();
	return 0;
}
