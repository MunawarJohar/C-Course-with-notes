#include<iostream>
using namespace std;

class Base1{
	public:
		void greet()
		{
			cout<<"HOW are you"<<endl;
		}
	
};

class Base2{
	
	public:
	void greet(){
	
	cout<<"Kia hal hy "<<endl;
}
};


class Derived:public Base1,public Base2
{
int a;
	public:
		void greet()
		{
			
			Base1::greet();
		}
		
		
		
		
		
		
};
class B{
	
	public:
		void say(){
		
		cout<<"Hello word "<<endl;
}
};

// D's new say() method  
class C:public B
{
	
	public:
	int a;
	void say()
	{
		cout<<"hello my beutiful people"<<endl;
	}
};
int main()
{
	// Ambiguity resolution in inheritance 
	
	//Ambiguty 1
	Base1 base1obj;
	
	Base2 base2obj;
		
		base1obj.greet();
		base2obj.greet();
		
		Derived D;
		D.greet();
		
		
		// Ambiguity 2
		
	
		
		B b;
		b.say();
		
	C c;
	c.say();
		
	
		
	return 0;
}
