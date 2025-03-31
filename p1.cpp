#include<iostream>
#include<conio.h>
using namespace std;
void repeat()
{
	string ud;
	int n;
	cout<<"enter a message:";
	getline(cin,ud);
	cout<<"enter a repeatation:";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<ud<<endl;
	}
}
main()
{
	repeat();
}

