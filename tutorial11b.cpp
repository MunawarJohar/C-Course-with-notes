#include<iostream>
using namespace std;
int main()
{
	int x=10;
	//break and continue statment in c++
	for(int t=0;t<=10;t++)
	{
		if(t==2){
			break;
		}
		cout<<"the value of t :"<<t<<endl;
		goto x;
	}
	return 0;
}
