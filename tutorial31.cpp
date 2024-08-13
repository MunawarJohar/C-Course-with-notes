#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		complex(int x,int y)//constructor 1
		{
			a=x;
			b=y;
		}
		complex(int x)//constructor 2
		{
			a=x;
			b=0;
		}
		complex()//constructor 3 is default constuctor 
		{
			a=0;
			b=0;
		}
		void prinNumber()
	{
		cout<<"Your number  is "<<a<<"+"<<b<<"i"<<endl;
	}
};
int main()
{
//contructor overloading in c++
	complex c1(4,6);
	c1.prinNumber();
	
	complex c2(5);
	c2.prinNumber();
	
	complex c3;
	c3.prinNumber();
	return 0;
}

