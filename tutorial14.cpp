#include<iostream>
using namespace std;

struct employe
{
	int eId;
	char favchar;
	float salary;
};

union money
{
	int rice;
	char car;
	float pounds;
};
/*
struct hod
{
	string name="ali";
	string deparment="Bscs";
	int regNo;
	
}h;*/
int main()
{
	//structure and union 
	
	//structure user defined type
struct employe munawar;
munawar.eId=148;
munawar.favchar='M';
munawar.salary=155500;

cout<<"The Id is :"<<munawar.eId<<endl;
cout<<"The favitre char is:"<<munawar.favchar<<endl;
cout<<"The salay  is:"<<munawar.salary<<endl;

union money m1;
m1.rice=160;
cout<<"The union of rice in union one option is exsecute :"<<endl;
cout<<m1.rice;

m1.pounds=150;
cout<<"The pounds is :"<<m1.pounds<<endl;
/*
enum Meal(breakfast,lunch,dinner)
Meal m1=lunch;
cout<<(m1==2);
cout<<breakfast;
cout<<lunch;
cout<<dinner;
*/

/*

h ahmad;
cout<<"The Id is :"<<ahmad.name<<endl;
cout<<"The favitre char is:"<<ahamd.deparment<<endl;
cout<<"The salay  is:"<<ahmad.regNo<<endl;
*/

	return 0;
}
