#include<iostream>
using namespace std;

class Number
{
int a;
public:
	Number(){
	}
Number(int num)
{
	a=num;
	}
	
	Number(Number &obj)
{cout<<"copy constructor called "<<endl;
	a=obj.a;
	}
	
	void display()
	{
		cout<<"The number for a this object is  "<<a<<endl;
		}	
	
};
int main()
{
	
	// Copy constructor
	Number x(40),y,z(50),z2;
	x.display();
	y.display();
	z.display();
	
	Number z1(x);
	z1.display();
	Number y1(y);
	y1.display();
	
	z2=z;//copy constructor not called
	
	Number Z3=z;//copy constructor invoked 
	return 0;
}
