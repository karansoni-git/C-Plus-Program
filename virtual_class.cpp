/* virtual is keyword that is use when ambiguity occurs in our program
when we inherit property from grandparent and through multi parents than property of
grandparent inherit many times or create duplicate value in sub-child and occur ambiguity in 
program.
for this situation we use vitual that directly inherit value to the last child
=>if we modify grandparent property than modify property will inherit*/

#include<iostream>
#include<conio.h>
using namespace std;
class student{	
	protected:
	int rollno;
	void getrollno()
	{
		cout<<"ENTER ROLL NO:";
		cin>>rollno;
		cout<<endl;
	}
};
class test:virtual protected student{
	protected:
	int pys,chem,maths;
	void getmarks()
	{
		again: cout<<"ENTER PHYSICS & CHEMISTRY & MATHS MARKS:"<<endl;
		cin>>pys>>chem>>maths;
		cout<<endl;
		if(pys>100 || chem>100 || maths>100)
		{
			cout<<"ENTER VALID MARKS!"<<endl<<endl;
			goto again;
		}
	}
};
class sport:virtual protected student{
	protected:
	int score;
	void sprtmarks()
	{
		repeat: cout<<"ENTER SPORT SCORE:";
		cin>>score;
		cout<<endl;
		if(score>50)
		{
			cout<<"ENTER VALID MARKS!"<<endl<<endl;
			goto repeat;
		}
	}
};
class result:protected test,protected sport{
	protected:
	int total;
	public:
	result()
	{
		getrollno();
		getmarks();
		sprtmarks();
		total=pys+chem+maths+score;
		cout<<"YOUR FINAL RESULT:"<<endl
			<<"PHYSICS:"<<pys<<endl
			<<"CHEMISTRY:"<<chem<<endl
			<<"MATHS:"<<maths<<endl
			<<"SPORT SCORE:"<<score<<endl
			<<"TOTAL:"<<total<<" OUT OF 350"<<endl;
	} 
};
main()
{
	result r1;
	getch();
	return 0;
}
