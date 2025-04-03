#include<iostream>
#include<conio.h>
//static int b=10; globally declared of static variable
using namespace std;
class k
{
	public:
	int a;
	/* static variable declaration inside class k and it's means is this variable 
	is belongs to this class not to an object. */
	static int b;
	public:
		void call(int x,int y)
		{
			cout<<x<<" "<<y<<endl;
		}
		public:
			static void show()//this is static function
			{
				/* only static variable accessible.non-static variable can't get acces
				to get into static function but static variable can be  accessible 
				from any where in class. */ 
				cout<<"im static: "<<b<<endl;
			}
};
int k::b=0;//always definition value=0 to static variable. 
int main()
{
	k k1,k2;
	cout<<"enter a: ";
	cin>>k1.a;
	cout<<"enter b: ";
	cin>>k1.b;
	k1.call(k1.a,k1.b);
	cout<<"enter again a: ";
	cin>>k2.a;
	cout<<"enter again b: ";
	cin>>k2.b;
	k2.call(k2.a,k2.b);
	k1.show();
	k::show();//we can invoke directly the static function (only stactic)
	cout<<k::b;//we can call static variable also without an object.
	getch();
	return 0;
}
