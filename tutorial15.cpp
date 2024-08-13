#include<iostream>
using namespace std;
// Function prototype  compiler   type function name (argument );
int multiply(int a,int b,int c);

void function()
{
	cout<<"This is programming  :"<<endl;
}
int sum(int a,int b)
{
	int c=a+b;
	return c;
}

int main()
{
	cout<<function;
//return 0 means program is success fully execute 	
	int num1,num2,num3;
	cout<<"Enter num1 "<<endl;
	cin>>num1;
	
	cout<<"Enter num2 "<<endl;
	cin>>num2;
	
	cout<<"Enter num3  "<<endl;
	cin>>num3;
	cout<<"The sum is "<<sum(num1,num2)<<endl;
	//actual parameter 
	cout<<"The Mutipilcation is "<<multiply(num1,num2,num3)<<endl;
	
  //funtion();
	return 0;
}
int multiply(int a,int b,int c)
{//formal parameter 
	int m=a*b*c;
	return m;
}


