#include<iostream>
using namespace std;

class Base
{
int data1;//by default private not inheritale
public:
	int data2;
	void setData();
	int getData1();
	int getData2();
	
	
};
class Derived:private Base  //class is being derved publically
{
	int data3;
	public:
	void process();
	void display();
	
};
void Base::setData()
{
	data1=10;
	data2=20;
}
int Base::getData1()
{
	return data1;
}
int Base::getData2()
{
	return data2;
}
void Derived::process()
{
	data3=data2*getData1();
	
}
void Derived::display()
{
	cout<<"Value of data 1 is :"<<getData1()<<endl;
	cout<<"Value of data 1 is :"<<data2<<endl;
	cout<<"Value of data 1 is :"<<data3<<endl;
}
int main()
{
	//Single inheritane and deep
	Derived der;
	//der.setData();
	der.process();
	der.display();
	return 0;
}
