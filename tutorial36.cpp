#include<iostream>
using namespace std;
int main()
{
	//Inheritance & its different types in Oops  
	//Reusability is avery important features in OOp
	//Reusing classes save tme and money 
	
	
	//What is inheritance in c++
	//concept of Reusability in c++
	//we can reaue the properties of an Existing class by inhereititing from it .
	//the existing class is called the Base Class
	//The new class which is inherited is called Drived class
	//Reusing classes save tme and money
	//there are diffent types in c++
	//
	
	//types of inheritance
	//> Single inheritance 
	//A derives class with only one Base class    A
	//                                            |
	//                                            |   B is inherit from A    one parent one child
	//                                            |
	//                                            B
	
	
	
	
	// Multiple Inheritance                          A        B
	// >A derived class with than one Base class     |        |                                   
	//                                               |        |          C in inerit from A and B          two parent one child
	//                                               |        | 
	//                                                   C
	
	
	//Hierarchcal Inheritance 
	//> Several deriuved classes from a single base class 
	//                                                     C
	// >A derived class with than one Base class     |        |                                   
	//                                               |        |          C in inerit from A and B           one parent two child
	//                                               |        | 
	//                                               A        B
	
	
	// Multilevle inheritance in c++
	//  Deriving a class from already derived class      A
	//                                                   |
	//                                                   |           B  inherit from A and C inherit from B     one parent one child  one parent one child
	//                                                   B
	//                                                   |
	//                                                   |
	//                                                   C
	
	
	// Hybrid inheritane 
	// > hybrid inheritance is a combination of multiple and multilevel inheritance 
	
	
	//                                                    A
	//                                               |        |                                   
	//                                               |        |         
	//                                               |        |                                  one parent two  child  two parent one one child
	//                                               B        C
	//                                               |        |                                   
	//                                               |        |          B and C inherit from A and D inherit from B and C
	//                                                    D       
	
	
	
	return 0;
}
