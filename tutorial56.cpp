#include<iostream>
using namespace std;


class BaseClass
{
	public:
		int var_base=10;
		virtual void display()
		{
			
			cout<<"1.displaying Base class variable var_base  "<<var_base<<endl;
		}
	
	
};

class DerivedClass:public BaseClass
{
		public:
		int var_derived=2;
		void display()
		{
			
			cout<<"2.displaying Base class variable var_base  "<<var_base<<endl;
				cout<<"2.displaying Derived class variable var_base  "<<var_derived<<endl;
		}
	
	
	
};
int main()
{
	
// Virtual functions in c++

 BaseClass *base_class_pointer;
 BaseClass obj_base;
 
 
 DerivedClass obj_derived;
 
 base_class_pointer=&obj_derived;
 base_class_pointer->display();




	return 0;
}
