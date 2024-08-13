#include<iostream>
using namespace std;
int c=40;
int main()
{
	int a,b,c;
	cout<<"Enter value of a :"<<endl;
	cin>>a;
		cout<<"Enter value of b :"<<endl;
	cin>>b;
	c=a+b;
	cout<<"The sum is :"<<c<<endl;
	
	cout<<"The global C is "<<::c<<endl;
	
	
	//****************Data Type long float ****************
	float d=55.5f;   //use F;
	long double e=33.56l;    //use L;
	cout<<"The size of operator  d"<<sizeof(55.5)<<endl;
	
	cout<<"The size of operator  d    :"<<sizeof(55.5f)<<endl;
   cout<<"The size of operator  d      :"<<sizeof(55.5l)<<endl;	
	
	
	cout<<"The value of  d  :"<<d<<endl<<"The value of e :"<<e<<endl;
	
	//*********Rfenrence Varaible  ************
	
	// Ali ------------>Ahmad ------------------->danger coder 
	float x=455;
	float & y=x;
	cout<<x<<endl;
	cout<<y<<endl;
	
	//********Type Casting **************
	int k=5.5;
	cout<<"The value of k"<<float(k)<<endl;
   float m=6.6;
   cout<<"The value of f is "<<int(m)<<endl;
	
	cout<<"After type casting "<<float(k+m)<<endl;
	
	cout<<"After type casting "<<int(k+m)<<endl;
	return 0;
}
