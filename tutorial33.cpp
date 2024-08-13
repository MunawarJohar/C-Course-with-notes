#include<iostream>
using namespace std;
class BankDeposite
{
	int principle;
	int year;
	float intestRate;
	float returnValue;
	public:
		BankDeposite(){
		}
		BankDeposite(int p,int y,float r);
		BankDeposite(int p,int y, int r);
		void show();
};
BankDeposite::BankDeposite(int p,int y,float r)
{
	principle=p;
	year=y;
	intestRate=r;
	returnValue=principle;
	for(int i=0;i<y;i++)
	{
		returnValue=returnValue*(1+r);
	}
}
BankDeposite::BankDeposite(int p,int y,int r)
{
	principle=p;
	year=y;
	intestRate=float(r)/100;
	returnValue=principle;
	for(int i=0;i<y;i++)
	{
		returnValue=returnValue*(1+intestRate);
	}
}
void BankDeposite::show()
{
	cout<<"The principle amount was  :"<<principle;
	cout<<"The return  amount  after year  :"<<year<<endl;
	cout<<"The year is   :"<<returnValue<<endl;
}
int main()
{
	//dynamic intialization
	BankDeposite bd1,bd2,bd3;
	int p,y;
	float r;
	int R;
	cout<<"Enter the value of p y and r"<<endl;
	cin>>p>>y>>r;
	bd1=BankDeposite(p,y,r);
	bd1.show();
	
	cout<<"Enter the value of p y and r"<<endl;
	cin>>p>>y>>R;
	bd2=BankDeposite(p,y,2);
	bd2.show();
	
	return 0;
}
