#include<iostream>
using namespace std;
int main()
{
	//Loops in c++
	//There are three types in c++
	//1.For loop                   2.while loop                   3. do while 
	
	//For loop
	cout<<"For loop"<<endl;
	for(int i=0;i<=5;i++)
	cout<<i<<endl;
	//Example for infinite loop
	//	for(int i=0;30<=50;i++)
	//cout<<i<<endl;
	
	//While loop in c++ if condition is true then loop is exsicute
	// Printing 1 to 10 using while loop
	cout<<"While loop"<<endl;
	int j=1;
	while(j<=10)
	{
		cout<<j<<endl;
		j++;
	}

//do while loop in c++ do while loop exsicute atleast one time
cout<<"Do While loop"<<endl;
int k=1;
do{
	cout<<k<<endl;
	k++;
}while(k<=5);
//while (k>5) output is 1 
	return 0;
}
