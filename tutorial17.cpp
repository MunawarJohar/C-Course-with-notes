#include<iostream>
using namespace std;
int product(int a,int b)
{int c;
c=a*b;
return c;
	
}

int moneyReceived(int currentMoney,float factor=1.04)
{
	return currentMoney*factor;
}
int main()
{
	int a,b;
	//inline function 
	cout<<"Enter two numbers ";
	cin>>a>>b;
	cout<<"The product is "<<product(a,b)<<endl;
	int money=100000;
	cout<<"If you have :"<<money<<"Rs in your bank you will receive "<<moneyReceived(money)<<"Rs in after one year "<<endl;
	cout<<endl;
	cout<<"For VIPS :"<<money<<"Rs in your bank you will receive "<<moneyReceived(money,1.1)<<"Rs in after one year "<<endl;
	return 0;
}
