#include<iostream>
using namespace std;


int main()
{
	// Constructor in derived class in C++
	// we can use constructor in drive class
	// if base clas constructor does not any argument thre is no need of any constructor in derived classs 
	
	// constructors in multiple inheritance           A                 B 
	//                                                         C
	//
	//constructor in multilevel inheritane     A
	//                                         |
	//                                         B
	//                                         |
	//                                         C
	
	
	// Special Syntax
	
	
	// special case of virtual base class
	// the constructor for virtual base classes are invkoed before an nonvirtual base class 
   // Any non virtual base class are then constructrd before the devired class constructor is executed
   	
	return 0;
}
