#include<iostream>
using namespace std;
int main()
{
	int mark[4]={44,54,64,74};
	int i=0;
	
	//solve problem through do while loop
	do{
		cout<<"the mark is   "<<i<<" :"<<mark[i]<<endl;
		i++;
		
	}while(i<4);
	
	//solve problem through while loop
	while(i<4)
	{
cout<<"the mark is   "<<i<<" :"<<mark[i]<<endl;
      i++;
	}
	
	return 0;
}
