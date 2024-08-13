#include<iostream>
using namespace std;
int main()
{
	
	//create two classes
	// 1.simple calculator   two number input perform + - * /
	// 2.scientific calculator  four scientific four scientific function 
	
	//create another class and Hybrid calculator and inherit it using these two classes :
	// what type of inheritance are you using 
	// which mode of inheritance 
	// create an object of hybrid calculator
	
	class Simple_calculator
	{
		public:
			int num3;
				int num4;
				int num5;
				int num6;
			int n1;
			int n2;
			void inputOperation(char '*', char '-', char '/')
			{
				num3=n1*n2;
				num4=n1+n2;
				num5=n1-n2;
				num6=n1/n2;
			}
			void Show()
			{
				
				cout<<"mul is :"<<num3<<endl;
					cout<<"sum is :"<<num4<<endl;
						cout<<"sub is :"<<num5<<endl;
							cout<<"dev is :"<<num6<<endl;
			}
	};
	return 0;
}
