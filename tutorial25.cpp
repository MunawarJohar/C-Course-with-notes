#include<iostream>
using namespace std;
class Employee
{
	int id;
 	int salary;
	public:
		void setID(){
			salary=10000;
			cout<<"Enter the ID of employee :"<<endl;
			cin>>id;
		}
		void getID()
		{
			cout<<"The Employee ID is : "<<id<<endl;
		
		}
};

int main()
{
	//Array of objects 
	
Employee fb[5];
for(int i=0;i<5;i++)
{
fb[i].setID();
fb[i].getID();	
}	
	return 0;
}
