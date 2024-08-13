#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return (a+b+c);
}

//calculate the volume of a cylinder is 
int volume(double r,int h)
{
	return 3.14*r*r*h;
}
// Calculate the volume of a cube 
int volume(int a)
{
	return (a*a*a);
}
//Calculate the Rectangle of Box
int volume(int l,int b,int h)
{
	return (l*b*h);
}
int main()
{
	//function Overlaoding 
	int n1,n2,n3;
	cout<<"Enter the three number "<<endl;
	cin>>n1>>n2>>n3;
	cout<<"The addition of "<<n1<< "a + b "<<n2<< "is "<<n1<<add(n1,n2)<<endl;
	
		cout<<"The addition of a"<<n1<< " + b "<<n2<<"+c "<<n3<<" is :"<<add(n1,n2,n3)<<endl;
	cout<<"The calculation of cylinder is :"<<endl;
	cout<<"The volume  of cylinder is :"<<volume(n1,n2,n3)<<endl;
	cout<<"The volume  of cylinder raduis and height is :"<<volume(n1,n3)<<endl;

    cout<<"The volume of cube  of  a cylinder is :"<<volume(n1)<<endl;
	return 0;
}
