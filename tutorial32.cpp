#include<iostream>
using namespace std;
class simple 
{
	int data1;
	int data2;
	int data3;
	public:
		simple(int a,int b=9,int c=6)
		{
			data1=a;
			data2=b;
			data3=c;
		}
		void printData()
		{
			cout<<"The value of data is :"<<data1<<" and "<<data2<<" and "<<data3<<endl;
		}
};
int main()
{
	 //constructor with default constructor in c++
	simple s(1);
	s.printData();
	return 0;
}
