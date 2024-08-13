#include<iostream>
using namespace std;

class Employee
{
	int id;
 static	int count;
	public:
		void setData(){
			cout<<"Enter the ID of employee :"<<endl;
			cin>>id;
			count++;
		}
		void getData()
		{
			cout<<"The Employee ID is : "<<id<<endl;
			cout<<"The number of employee is  :"<<count<<endl;
		}
		static getCount()//static member functions
		{
			cout<<"The value of count is :"<<count<<endl;
		}
};
//count is the data member of class 
int Employee::count=0;//default value is zero 
int main()
{
	//Static data members
	
	Employee emp,emp1,emp2;
	emp.setData();
	emp.getData();
	Employee::getCount();
	
	
	emp1.setData();
	emp1.getData();
	Employee::getCount();
	
	
	emp2.setData();
	emp2.getData();
	Employee::getCount();//static member functions 
	return 0;
}
