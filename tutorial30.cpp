#include<iostream>
using namespace std;

class complex
{
	int a,b;
 public:
 //creating a constructor
 
 //it is used to initialize the objects of its class
 complex(void)
 {
	
	a=10;
	b=0;
}//constructor decalration  
 //this is a default constructor  there no parameter
void display()
{
	cout<<"The value of "<<a<<" and "<<b<<endl;
}	
};
//class add
///{
//	int num1;
//	int num2;
//	public:
//		add(int a,int b)
	//	{
	//		num1=a;
	//		num2=b;
	///		
	//	}
//	int display()
	////{
	//	cout<<"The sum is :"<<endl;
	//	return (num1+num2);
//	}
//};
int main()
{
 
 //Parameterize and default constructor
complex com;//object of default constructor 
com.display();


//add sum;   //object of normaol or parametized constructor 
//sum.add(4,6);
//sum.display();
return 0;
}
