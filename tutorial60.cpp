#include<iostream>
#include<fstream>
using namespace std;

// The usefull classes for working with files in c++
// 1. fstreambase
// 2.ifstream -->derived from fstream base
// 3.ofstream -->derived from fstream base



int main()
{
	//  File I_O Reading and writing  in c++
	string st="Munawar Bhai";
	string st2;
  // opennig files using contructor	
  ofstream out("sample60.txt");
	out<<st;                     //<<write
	
	
	// opening files using constructor and reading it
	
	ifstream in("sample60b.txt");
// in>>st2;                  //  >>read;
 getline(in,st2);
 cout<<st2<<endl;
 cout<<st2;
	return 0;
}
