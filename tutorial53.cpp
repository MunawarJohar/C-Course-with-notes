#include<iostream>
using namespace std;

class A
{
  int a;
  public:
  void setData(int a)
{
	    this->a=a;	//used this pointer
}

//
//    A & setData(int a)
//  {
//	    this->a=a;
//		return this;	//used this pointer
//   }


void getData()
{
	cout<<"The value of a is :"<<a<<endl;
}
};

int main()
{
	
// this pointer in c++
//    this is a keyword which is a pointer which points to the object which invokes th member function 
	 A a;
	 a.setData(5);
	 a.getData();
	return 0;
}
