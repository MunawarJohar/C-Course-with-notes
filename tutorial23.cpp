#include<iostream>
using namespace std;
class shop
{
	int itemId[100];
	int itemPrice[100];
 int counter;
 public:
 void initCounter(void)
 {counter=0;
	 }	
	 
	// void getPrice();
	 void setPrice();
	 
void displayPrice();
 
	 
};
//void shop::getPrice()
//{
//	cout<<"Enter Id of uour item  :"<<endl;
//	cin>>itemId[counter];
//	cout<<"Enter Price of your item"<<endl;
//	cin>>itemPrice[counter];
//	counter++;
//}
void shop::setPrice()
{
	
	cout<<"Enter Id of your item  :"<<endl;
	cin>>itemId[counter];
	cout<<"Enter Price of your item"<<endl;
	cin>>itemPrice[counter];
	counter++;
	
	
}
void shop::displayPrice()
{
	for(int i=0;i<counter;i++)
	{
		cout<<"The price of items with Id "<<itemId[i]<<"is :"<<itemPrice[i]<<endl;
	}
}
int main()
{
	// Memory allocation in objects & usin array 
shop dukan;
dukan.initCounter();
dukan.setPrice();
//dukan.getPrice();
dukan.displayPrice();
	
	return 0;
}
