#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
		void setNumber(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		//Below line means that non member sumcomplex function allowed do anything my private data
		friend complex sumComplex(complex o1,complex o2); //Decalration of friend function friemd function accessed private data of class
		void printNumber()
		{
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;  
			//   1+4i     5+8i
		}
};
complex sumComplex(complex o1,complex o2)
{
	complex o3;
	o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main()
{
	//Friends Functions
//Properties of friend function 
//1.not in the scope of class
//2.can be invoked without the help of object
//3.usualy contain the object as argument 
//4.can be declare private or public of class 
//5.it can not directly names need member to access any number
	complex c1,c2;
	c1.setNumber(1,4);
	c1.printNumber();
	
	c2.setNumber(5,8);
	c2.printNumber();
	
	return 0;
}
