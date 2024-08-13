#include<iostream>
using namespace std;
int main()
{
	// Array in c++
	// An array is a collextion of items store in a contiguous memory location 
	//For Example 2500 store in variable so we used in one variable in array type variable 
	// [0] [1] [2] [3] [4]
	int mark[5]={50,47,33,55,69};
	cout<<"Mark 0 :"<<mark[0]<<endl;
	cout<<"Mark  1 :"<<mark[1]<<endl;
	cout<<"Mark 2 :"<<mark[2]<<endl;
	cout<<"Mark 3  :"<<mark[3]<<endl;
	cout<<"Mark 4 :"<<mark[4]<<endl;
					
					// You can change the value of array 
			mark[3]=90;
		cout<<"These are the marks of 5 students :"<<endl;
		cout<<"Mark 1 :"<<mark[0]<<endl;
		cout<<"Mark  2 :"<<mark[1]<<endl;
	
	    cout<<"Mark 3:"<<mark[2]<<endl;
		cout<<"Mark 4  :"<<mark[3]<<endl;
		cout<<"Mark 5 :"<<mark[4]<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<"The marks of student "<<i<<"is :"<<mark[i]<<endl;
		}
		//Pointers and array
		int *p=mark;
		
		cout<<"The value of mark[0] *p    :"<<*p<<endl;
		cout<<"The value of mark[1]*P(p+1) :"<<*(p+1)<<endl;
		cout<<"The value of mark[2]  *P(p+2):"<<*(p+2)<<endl;
		cout<<"The value of mark[3 ]  *P(p+3):"<<*(p+3)<<endl;
		
	return 0;
}
