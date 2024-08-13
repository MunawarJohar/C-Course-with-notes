#include<iostream>
using namespace std;

class Base
{
	protected:
	int a;
	private:
	int b;
	
};
//for a protected member 
//                                      public derivation             private derivation            protected derivation
// private     members                  Not Inherited                  Not Inherited                  Not Inherited
// protected   members                   protected                      private                         protected  
// public      members                   public                         private                         protected  
class Derived:public Base
{
	
	
	
};
int main()
{
	
	//Protected access modifier 
	Base b;
	Derived d;
	// cout<<d.a;  // will not work because both protected 
	return 0;
}
