#include<iostream>
using namespace std;
/*
 case 1
 class B:public A
 {
 first A() then B
};


case 2
class A :public B,public C
{
B( ) then C() and finaly A( )

};


case 3
class A:public B,virtual public C
{
 C()  then B() and A() are orderly Execute 
};
*/

class Base1
{
	
int data1;
public:
Base1(int i)
{
	
	data1=i;
	
	cout<<"Base1 class constructor called  :"<<endl;
	}	
	
	void printData1()
	{
		
		cout<<"The value of data1 is  "<<data1<<endl;
		
	}
	
};


class Base2
{
int data2;
public:
Base2(int i)
  {
	
	data2=i;
	
	cout<<"Base2 class constructor called  :"<<endl;
	}	
	
	void printData2()
	{
		
		cout<<"The value of data1 is  "<<data2<<endl;
		
	}
	
};


class Derived:public Base1,public Base2
{
	
int derived1,derived2;
public:
     Derived(int a,int b,int c,int d):Base1(a),Base2(b)
{
	derived1=c;
	derived2=d;
	cout<<"Derived class constructor is called :"<<endl;
	
	}	
	void printData()
	{
		cout<<"The value of derived1 is  "<<derived1<<endl;
		cout<<"The value of derived2 is  "<<derived2<<endl;
	}
	
};

int main()
{
	// code Example of constructor in derived class 
	
	Derived munawar(10,20,30,40);
	munawar.printData1();
	munawar.printData2();
	munawar.printData();

	return 0;
}
