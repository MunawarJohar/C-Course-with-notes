#include<iostream>
using namespace std;


template<class T>
class Harry
{
	
	public:
		T Data;
		Harry(T a)
		{
			
			Data=a;
		}
		void Display();
			
};
template<class T>

void Harry<T>::Display()
		{
			
			cout<<Data;
		}
		

int main()
{
	// Member function template & overlaoding template function 
	Harry <float>h(5.5);
	h.Display();
	cout<<endl;
	
	return 0;
}
