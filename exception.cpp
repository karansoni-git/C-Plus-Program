/*exceptions are unpredictable circumstances.our program
suddenly terminate in run time with some errors are exceptions.
there are three main components to handle exception in c++
try,throw and catch
=>try is a block which is contains certain condition for exception
=>throw is keyword which throw a statement or value to catch block if certain 
condition is true
=>catch(formal argument) is block which catch a throw value from try block.
*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b;
	float c;
	cout<<"enter a(dividend):";
	cin>>a;
	cout<<endl;
	cout<<"enter b(divisor):";
	cin>>b;
	cout<<endl;
	try
	{
		if(b==0)
		{
			throw b;//return(throw) b to catch block.
		}
		else
		{
			c=(float)a/b;
			cout<<"Division:"<<c;
		}
	}
	catch(int b)//receive b.
	{
		cout<<"B(divisor) can't be:"<<b;
	}
	getch();
	return 0;
}

//this progrom for multiple catch() block.
/*
main() {
    int a;
    cout<<"enter a:";
    cin>>a;
    cout<<endl;
    try
    {
        if(a==0)
        throw a;
        if(a==100)
        throw ('e');
        if(a==1000)
        throw (5.5f);
        else
        cout<<"value of a:"<<a<<endl;
    }
    
    catch(int a)
    {
        cout<<"int a:"<<a;
    }
    catch(char a)
    {
        cout<<"char a:"<<a;
    }
    catch(float a)
    {
        cout<<"float a:"<<a;
    }
    
    //multiple exception and single catch function.
    catch(...)
    {
    	cout<<"something went wrong!";
	}
	getch();
	return 0;
}
*/
