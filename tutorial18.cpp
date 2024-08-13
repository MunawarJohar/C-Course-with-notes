#include<iostream>
using namespace std;
//For Factorial
int factorial(int n)
{
	if(n<=1){
		return 1;
	}
	
	return n*factorial(n-1);
}

//For Faboncci sereis 

int fib(int n)
{
	if(n<2){
		return 1;
	}
	
	return fib(n-2)+fib(n-1);
	//fib(5)
	//fi(4)+fib(3)
	//fib(2)+fib(3)+fib(2)+fib(3)
	
	
}
int main()
{
	//Recurtion or recursive fution 
	
//Factorail of a number 
// for EXample 
//5!=5*4*3*2*1=120

//n!=n(n-1)!

int a;
cout<<"Enter the number "<<endl;
cin>>a;

cout<<"The Factorial of "<<a<<"  is:"<<factorial(a)<<endl;

//Fibonacci sequence Or sereis 1 ,1,2,3,5,8,13,34,55
//1+1=2   1+2=3   3+5=8  5+8=13  8+13=21  13+21=34  21+34=55

	cout<<"The Fibonacci sereis "<<a <<" is :"<<fib(a)<<endl;
	return 0;
}
