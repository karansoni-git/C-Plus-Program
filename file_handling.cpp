/*file handling means handle input and output operation on specific file.
fstreambase-->ifstream,ofstream,fstream this all files derived from it
contains in fstream.h header file.
ifstream derived from istream and ofstream derived from ostream.
ifstream perform reading task =>print file data on console.
ofstream perform writing task=>print program data into file. 
*/
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
//main()
//{
/*two ways to open and close file.
1.using constructor of ifstream and ofstream class.
2.using member function of classes.*/

//=>ofstream
//1.using constructor of ifstream and ofstream class.
	//opening existing file
//	ofstream nfile("C:\\Users\\karan\\OneDrive\\Desktop\\newfile.txt");
//	//wrting into file through the class object and insertion operator. 
//	nfile<<"hello all im karan and this is a new file";
//	//closing file .
//	nfile.close();

//2.using member function of classes.
//	ofstream fhdl;
//	fhdl.open("C:\\Users\\karan\\OneDrive\\Desktop\\newfile.txt");
//	fhdl<<"this is new line in new file";
//	fhdl.close();


//ifstream
//open existing file
//	ifstream ffile("C:\\Users\\karan\\OneDrive\\Desktop\\newfile.txt");
//	string str; //creating string variable to store data of file
//	getline(ffile,str);//fetching data into string variable str.
//	cout<<str;	//printing into console.
//	ffile.close();

//	getch();
//	return 0;
//}

//practice program-1:
//main()
//{
//	ofstream out("C:\\Users\\karan\\OneDrive\\Desktop\\karan.txt");
//	string name,city;
//	int age,idno;
//	cout<<"enter your name:";
//	getline(cin,name);
//	cout<<endl;
//	cout<<"enter your age:";
//	cin>>age;
//	cout<<endl;
//	cout<<"enter your idno:";
//	cin>>idno;
//	cout<<endl;
//	cout<<"enter your city:";
//	cin>>city;
//	cout<<endl;
//	out<<"NAME:"<<name<<endl;
//	out<<"AGE:"<<age<<endl;
//	out<<"IDNO:"<<idno<<endl;
//	out<<"CITY:"<<city<<endl;
//	cout<<"name:"<<name<<endl<<"age:"<<age<<endl
//		<<"idno:"<<idno<<endl<<"city:"<<city<<endl;
//	getch();
//	return 0;
//}

//practice program-2:
//we can use fstream class for input and output through single object.
//main()
//{
//	ifstream in;
//	in.open("C:\\programs\\c++ programs\\sample.txt");
//	string data;
////eof() stands for end of file retrieve all data of file until 0 not get
//	while(in.eof()==0) 
//	{
//		getline(in,data);
//		cout<<data;		
//	}
//	in.close();
//	getch();
//	return 0;
//}

/*we are use ifstream for reading data from file while ofstream use for writing 
data in file
but we can use fstream class for both purpose but we just have describe the mode 
(type of operation on file)
modes for opening a file:
1)ios::in => for reading data from file.default for ifsream class.
2)ios::out => for writing in file.default for ofstream.
it will remove all data of file if it has.
3)ios::app =>open file for writing and write data at end of the filedata.
4)ios::ate =>open file and send pointer to the end of the file.default is starting 
at file.
5)ios::trunc =>remove all existing data of file and write a new inserted data.
similar to ios::out.
6)ios::nocreate =>it will not create a new file for i\o operation,if file exists 
then it will open and perform operation on it otherwise give error.  
7)ios::noreplace =>it will create a new file if file already not exist,it's totally
opposite to ios::nocreate.
8)ios::binary =>it open the file in binary mode bydefault it is in text mode.
*/

//seekg(),tellg(),seekp(),tellp() this is file pointer funtion =>file_pointer.cpp
