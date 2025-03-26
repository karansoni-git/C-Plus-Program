#include<iostream>
#include<conio.h>
using namespace std;
class k
{
	public:
	int uid;
	string name;
	public:
	void call()
	{
		cout<<"enter uid: ";
		cin>>uid;
		cout<<"enter name: ";
		cin>>name;
		cout<<"uid: "<<uid<<endl<<"name: "<<name<<endl;
	}
};
main()
{
	k f1;
	f1.call();//calling function through f1 object that is object of class k 
	cout<<"enter uid again: ";
	cin>>f1.uid;//calling variable of class k using object f1.
	cout<<f1.uid;
	getch();
}
