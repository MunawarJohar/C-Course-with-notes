#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
	
	// File open and eof Function in c++
	
	ofstream out;
	out.open("sample60.txt");
	out<<"This is me :"<<endl;
	out<<"This is also me :"<<endl;
	out<<"This is you :"<<endl;
	out<<"This is also you :"<<endl;
	out.close();



 ifstream in;
 string st,st2;
 in.open("sample60.txt");
// in>>st>>st2;
// cout<<st<<st2;

while(in.eof()==0)
{
	
	getline(in,st);
	cout<<st<<endl;
}
 in.close();

	return 0;
}
