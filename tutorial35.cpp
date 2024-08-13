#include<iostream>
using namespace std;
int count=0;
class Num
{
	
	public:
		Num(){
		
		count++;

		cout<<"This is the time when constructor is calles for object  number :"<<count<<endl;
}
		~Num()
		{
			
			cout<<"This is a time when my destructor is called for object number "<<count<<endl;
			count--;
		}

};
int main()
{
	
	//Destructor never takes argument nor does it return value
	cout<<"We are inside our main function "<<endl;
	cout<<"Creating fist more objects "<<endl;
	Num n1;
	{
		cout<<"Entering this block"<<endl;
		cout<<"Creating two more objects "<<endl;
		Num n2,n3;
		
		
		cout<<"Existing this block"<<endl;
		
	}
	cout<<"Back to main"<<endl;
	return 0;
}
