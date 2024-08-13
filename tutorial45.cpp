#include<iostream>
using namespace std;

// Student --->Test
// Student --->sport
//Test-- ---->result
//sport-- ---->result




class Student
{
protected:
int roll_No;
public:
void set_Number(int a)
{
	roll_No=a;
	}	
	void print_Number()
	{
		cout<<"Your Roll Number is "<<roll_No<<endl;
	}
	
	
};

class Test:virtual public Student
{
protected:
float maths,physics;
public:
void set_Marks(float m,float p)
{
	maths=m;
	physics=p;
	}
	
	void print_Marks()
	{
		cout<<"Your result is here :"<<endl;
		cout<<"The marks of math is :"<<maths<<endl;
		cout<<"The marks of physics is :"<<physics<<endl;
		
		}	
	
	
};

class Sports:virtual public Student
{
	protected:
		float score;
		public:
			void set_Score(float sc)
			{
				score=sc;
			}
	void print_Score()
	{
		
		cout<<"Your PT score is "<<score<<endl;
	}
};

class Result:public Test,public Sports
{
	private:
		float total;
		public:
			void Dispaly()
			{
				total=maths+physics+score;
				print_Number();
				print_Marks();
				print_Score();
				cout<<"Your total score is :"<<total<<endl;
			}
	
};
int main()
{
	
	// Code example demostrating virtual base class 
	//                            Student  ------------> student is a virtual base class 
	
	//          Test                                  Sport
	
	//                             Result  --------------result inherit only  one time  
	//
	
	Result munawar;
	munawar.set_Number(148);
	munawar.set_Marks(65.4,70.5);
	munawar.set_Score(5);
	munawar.Dispaly();
	
	return 0;
}
