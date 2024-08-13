#include<iostream>
#include<string>

using namespace std;
class binary{
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void ones_complement(void);
		void display(void);
		
};	

void binary::read()
{
	cout<<"Enter a binary number "<<endl;
	cin>>s;
}
void binary::chk_bin()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)!='0'&&s.at(i)!='1')
		{
			cout<<"Incorrect binary format"<<endl;
			exit(0);
		}
	}
}
void binary::ones_complement(void)
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='0')
		{
		s.at(i)=='1';
	}
	else 
	{
			s.at(i)=='0';
	}
}
}
void binary::display(void)
{
	cout<<"Displaying your binary number :"<<endl;
	for(int i=0;i<s.length();i++)
	{
	cout<<s.at(i);
	}
	cout<<endl;
}
int main()
{
	//OOPS _Classes and object 
	
	//C++  initialy c with classes by strooustrop
	
	
	// class extention of structure in (c)
	
	// struct
	// no methods
	//members are public 
	
	//classes=structure +more
	
	//classes can have methods and properties 
	//classes can make few members as private &few as public
	
	//structure in c++ are typesdefined
	//you can declare objec along with the class declaratiom like this 
	
	//
	
	
	
	//Nesting of member function
	binary b;
	b.read();
	b.chk_bin();
	b.display();
	b.ones_complement();
	b.display();
	

	return 0;
}
