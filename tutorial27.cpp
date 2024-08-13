#include<iostream>
using namespace std;
//Forward declaration
class complex;

class calculator
{
	public:
		
int add(int a,int b)
     {
	return (a+b);
	}	
	
	int sumRealcomplex(complex,complex );
	int sumCompcomplex(complex,complex );
};

class complex
{
	int a,b;
	friend int calculator::sumRealcomplex(complex o1,complex o2);
	
	friend int calculator::sumCompcomplex(complex o1,complex o2);
	public:
		void setNumber(int n1,int n2)
		{
			a=n1;
			b=n2;
		}

		void printNumber()
		{
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;  
			//   1+4i     5+8i
		}
};
int calculator::sumRealcomplex(complex o1,complex o2)
{
	return (o1.a+o2.a);
}

int calculator::sumCompcomplex(complex o1,complex o2)
{
	return (o1.b+o2.b);
}
int main()
{
	//Freind  class and member functions
	complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(5,7);
	calculator calc;
	int res=calc.sumRealcomplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is :"<<res<<endl;
	
	complex O1,O2;
	O1.setNumber(2,5);
	O2.setNumber(2,4);
	calculator cal;
	int cre=cal.sumCompcomplex(o1,o2);
	cout<<"The sum of complex part of o1 and o2 is :"<<cre<<endl;
	return 0;
}
