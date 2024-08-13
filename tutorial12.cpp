#include<iostream>
using namespace std;
int main()
{
	//pointer is a data type or variable of data type 
	//which holds the address of other variable  
	int a=3;
	int *b=&a;
	//& address of operator 
	//* deference of operator 
	
	
	//& address at 
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<b<<endl;
	//*     value at deference 
	cout<<"The value address  of b is "<<*b<<endl;
	
	//pointer to pointer 
	int**c=&b;
	
	cout<<"The address  of b is "<<&b<<endl;
	cout<<"The value   of b is "<<b<<endl;

	cout<<"The address  of c is "<<*c<<endl;	
	
	cout<<"The address  of c is "<<**c<<endl;	

	return 0;
}
