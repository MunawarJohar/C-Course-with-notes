#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
		int a,b,c;
	public:
			string name ;
			double salary ;
	void setDate(int a,int b,int c);//declarition
	void getData()
			{
				cout<<"The value of a is "<<a<<endl;
				cout<<"The value of b is "<<b<<endl;
				cout<<"The value of c is "<<c<<endl;
				cout<<"The Name of Employee is "<<name<<endl;
				cout<<"The Salary of Employee is "<<salary<<endl;
			}
			
};
void Employee::setDate(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
}
int main()
{
	//classes public ,private ,protected accessed modifer
	//in structure is data is not hide and access all function 
	//class is better option for functoin 
	
	Employee emp;
	emp.setDate(10,20,30);
	
	emp.name="Munawar";  //derect access
	emp.salary=100000;
	emp.getData();
	
	
	return 0;
}
