#include<iostream>
using namespace std;
//Base class
class Employee
{
	public:
	int id;
	float salary;
		Employee(int inpid){
			id=inpid;
			salary=34;
		}
		Employee(){}//Member initiazer 
};


//Derived class
//class {{derived-class-name}}:{{visibility-mode}}
//private are never inherit 
class Programmer:Employee
{
	
	public:
		int languageCode=5;
		Programmer(int inpid)
		{
			id=inpid;
		}
		void getData()
		{
			cout<<"the id is "<<id;
		}
};
int main()
{
	
	//inheritance syntax
	Employee emp(2),emp1(4);
	cout<<emp.salary<<endl;
	cout<<emp1.salary<<endl;
	
	
	Programmer skillF(1);
	cout<<skillF.languageCode<<endl;
	skillF.getData();
	return 0;
}
