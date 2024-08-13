#include<iostream>
using namespace std;


class Shop
{
       int id;
	   float price;
	   public:
	   void setData(int a,int b)
	   {
	   	id=a;
	   	price=b;
	   	
			} 	
	void getData()
	{
		
		cout<<"code of this item  is :"<<id<<endl;
		cout<<"price of this item  is :"<<price<<endl;
	}
	
};
int main()
{
	int size=3;
	// Array of object using pointer
	
	// int *ptr=&size
	// int *ptr=new int[34];
	
	// 1.general store items  2.vaggies items  3.hardware items
	Shop *ptr=new Shop[size];
     Shop *ptrTemp=ptr;	
	for (int i=0;i<size;i++)
	{
		int p,q;
		cout<<"Enter Id and price of item "<<i+1<<endl;
		cin>>p>>q;
	//	(*ptr).setDate(p,q)
	
	ptr->setData(p,q);
	ptr++;
	
	}
	for(int j=0;j<size;j++)
	{
		
		cout<<"Item number  :"<<j+1<<endl;
		ptrTemp->getData();
		ptrTemp++;
	}
	
	
	
	return 0;
}
