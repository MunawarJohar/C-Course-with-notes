#include<iostream>
using namespace std;


//
//template<class T,class T2>
//class nameofclass{
//	body
//};
template<class T1,class T2>
class myClass
{
	T1 data1;
	T2 data2;
	public:
	myClass(T1 a,T2 b)
	{
	data1=a;
	data2=b;
	
	}
	void displayy()
	{
		cout<<this->data1<<endl<<this->data2;
	}
	
};
int main()
{
	// C++ Templates Templates with multiple parameterImultiple comma sperited (one,two,twoaremore);
	
	myClass<int,float>obj(5,5.5);
	obj.displayy();
	
	myClass<char,float>obj2('M',5);
	obj2.displayy();
	return 0;
}
