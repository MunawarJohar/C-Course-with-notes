#include<iostream>
#include<cmath>
using namespace std;


	//create two classes
	// 1.simple calculator   two number input perform + - * /
	// 2.scientific calculator  four scientific four scientific function 
	
	//create another class and Hybrid calculator and inherit it using these two classes :
	// what type of inheritance are you using 
	// which mode of inheritance 
	// create an object of hybrid calculator
	//c math c++
	
class SimpleCalculator
{
	int a,b;
public:
void getDataSimple()
{
	cout<<"Enter the value of a for simple calculation "<<endl;
	cin>>a;
	cout<<"Enter the value of b for simple calculation  "<<endl;
	cin>>b;
	}	
	void perfromOperationSimple()
	{
		cout<<"The value of a+b is  "<<a+b<<endl;
		cout<<"The value of a-b is  "<<a-b<<endl;
		cout<<"The value of a*b is  "<<a*b<<endl;
		cout<<"The value of a/b is  "<<a/b<<endl;
	}
	
};	


class SientificCalculator
{
		int a,b;
public:
void getDataSientic()
{
	cout<<"Enter the value of a for sientific calculation  "<<endl;
	cin>>a;
	cout<<"Enter the value of b sientific calculation "<<endl;
	cin>>b;
	}	
	void perfromOperationSientific()
	{
		cout<<"The value of cos (a) is  "<<cos(a)<<"\t The value of cos (b) is  "<<cos(b)<<endl;
		cout<<"The value of sin(a) is  "<<sin(a)<<"\t The value of sin (b) is  "<<sin(b)<<endl;
		cout<<"The value of exp(a) is  "<<exp(a)   <<"\t\t The value of exp(b) is  "<<exp(b)<<endl;
	    cout<<"The value of tan(a) is  "<<tan(a)<<"\t The value of tan(b) is  "<<tan(b)<<endl;
	
}

void performAddition()
 {
 	
 	cout<<"The Addition is perform is this portion  :"<<endl;
 		cout<<"The value of cos (a)+(b) is  "<<cos(a)+(b)<<endl;
 	    cout<<"The value of sin (a)+(b) is  "<<sin(a)+(b)<<endl;
 	    cout<<"The value of exp (a)+(b) is  "<<exp(a)+(b)<<endl;
 	    cout<<"The value of tan (a)+(b) is  "<<tan(a)+(b)<<endl;
 }
	
};
 



class HybridCalculator:public SimpleCalculator,public SientificCalculator
{
	
	
	
	
};
int main()
{
	
	
//Function is succefully execute he just is comment out  	

  //	SimpleCalculator cal;
  //	cal.getDataSimple();
  //	cal.perfromOperationSimple();
	
 //	SientificCalculator Sien;
 //	Sien.getDataSientic();
 //	Sien.perfromOperationSientific();
 //   Sien.performAddition();
	
	
	
	HybridCalculator Hcal;
	Hcal.getDataSimple();
	Hcal.perfromOperationSimple();
	Hcal.getDataSientic();
	Hcal.perfromOperationSientific();
	Hcal.performAddition();
	
	return 0;
}
