#include<iostream>
using namespace std;
int main()
{
	//break and continue statment in c++
	for(int i=0;i<=10;i++)
	{
		//break statement 
		if(i==4)
		{
			break;
		}
		cout<<"the loop  :"<<i<<endl;
	}
	// continue statement 
	for(int k=1;k<=10;k++)
	{
		if(k==2||k==4||k==6||k==8)
		{
			continue;
		}
		cout<<"k is :"<<k<<endl;
	}
	return 0;
}
