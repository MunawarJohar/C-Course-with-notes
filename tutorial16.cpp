#include<iostream>
using namespace std;

// call by value
int sum(int a,int b)//formal argument
{
	int c=a+b;
	return c;
}
//call by reference
void swapPointer(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}


void swapRefencevar(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	//call value and call by refence
	
	int a=4,b=5;
	
	cout<<"The value of a   :"<<a<<endl;
	cout<<"the value of b   :"<<b<<endl;
	
	cout<<"the sum of 4  and 5 is :"<<sum(a,b);//actual argument 
	
	cout<<endl;
	cout<<"After swapping  is"<<endl;
	swapPointer(&a,&b);
	cout<<"The value of a   :"<<a<<endl;
	cout<<"the value of b   :"<<b<<endl;
	
	
	
	cout<<"Refence variable is :"<<endl;
	swapRefencevar(a,b);
	cout<<"The value of a   :"<<a<<endl;
	cout<<"the value of b   :"<<b<<endl;
	return 0;
}
