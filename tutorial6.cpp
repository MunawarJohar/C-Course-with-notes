//header file
//there are two types .1 system header files =it comes with the compiler 
#include<iostream>
// 2.User defined file it is written by programmer
//#include"this.h" this is not present there disnorary 
//cpprefence.com    for c++ header files 
using namespace std;
int main()
{
	cout<<"operators in c++  :"<<endl;
	cout<<"Hellow programmers "<<endl;
	cout<<"following are the arthematic operator  "<<endl;
	int a=8 ,b=12;
	cout<<"the value of a+b :"<<a+b<<endl;
	cout<<"the value of a-b :"<<a-b<<endl;
	cout<<"the of a :"<<a++<<endl;
	cout<<"the value of a    :"<<--a<<endl;
	
	//Assignment operators  used of assign values to variables 
	//int a=4,b=9;
	
	//comparison operator;
	cout<<"The value of a==b   :"<<(a==b)<<endl;
	cout<<"The value of a!=b  :"<<(a!=b)<<endl;
	cout<<"The value of a>b     :"<<(a>b)<<endl;
	
	// Logical operator 
	cout<<"The following logical operator  in c++     :"<<endl;
	cout<<"The logical and operator (a==b)&&(a<b) :"<<(a==b)&&a<b;

	return 0;
}
