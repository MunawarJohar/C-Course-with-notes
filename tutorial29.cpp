#include<iostream>
using namespace std;

class complex
{
	int a,b;
 public:
 //creating a constructor
 
 //it is used to initialize the objects of its class
 complex(void);//constructor decalration  
 //this is a default constructor  there no parameter
void display(); 	
};
complex::complex()
{
	
	a=10;
	b=0;
}
void complex::display()
{
	cout<<"The value of "<<a<<" and "<<b<<endl;
}
int main()
{
	//constructor in c++
	//do not have return type
	complex c1,c2,c3;
	c1.display();
	
	
	c2.display();
	
	c3.display();
  	return 0;
}
