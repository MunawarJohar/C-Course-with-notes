#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
		//constant in c++
	const int a=34;
	int b;
	cout<<"The value of a was  "<<a<<endl;
// a=45 error is expacted because a is const variable 
	cout<<"The value of a is "<<a<<endl;

	cout<<"The value of b without setw is :"<<b<<endl;
	//setw is c++
	cout<<"The value of b setw is "<<setw(40)<<b;
	
	//Operator procedence 
	//cpp refence.com
	int c=((((a*5)+b)-45)+85);//left to write
	cout<<endl;
	cout<<"The proceduce  operator "<<c;
	
	

	return 0;
}
