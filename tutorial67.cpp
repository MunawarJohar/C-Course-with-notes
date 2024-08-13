#include<iostream>
using namespace std;


//int funcAverage(int a,int b)
//{
//	float  avg=(a+b)/2;
//	return avg;
//}

template<class T1,class T2>
float funcAverage2(int a,float b)
{
	float avg=a+b/2.0;
	return avg;
}

int main()
{
	float a;
	a=funcAverage2(5,3);
	// Function  Template in c++ with parameter
printf("The average of these number id %.3f\n",a);
	return 0;
}
