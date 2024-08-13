#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
	
	// File c++ read and write program

//  3 useful class
// 1.fstream   2.ifstream         3 .ofstream

// Read operation    ifstream in("this.txt");
//  string st;
//    in>>st;
//             just like in




// Write operation
// ofstream  out("this.txt");
//  string st="harry";
//  out<<st;    writes to file this.txt


ofstream hout("sample60.txt");


// writing a string in file 
cout<<"Enter your name:"<<endl;

string name;
cin>>name;
hout<<"My name is  :"+name;
hout.close();
cout<<endl;

// Reading a file
ifstream hin("sample60.txt");
string content;
getline(hin,content);
cout<<"the content of file is this :"<<content;
hin.close();





	return 0;
}
