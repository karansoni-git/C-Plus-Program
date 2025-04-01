#include<iostream>
#include<conio.h>
using namespace std;
class k
{
/*member function and friend function/class can use private data of the function.
can't use protected data ouside the class means object through*/
	private:
		int id;
		string name;
	public:
		void dis()
		{
			cout<<"enter name: ";
			getline(cin,name);
			cout<<"enter id: ";
			cin>>id;
		}
		friend void v(k);	
};
void v(k k1)
{
	cout<<k1.name<<endl<<k1.id;
}
int main()
{
	k k1;
	k1.dis();
	v(k1);
	getch();
	return 0;
}
