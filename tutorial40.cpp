#include<iostream>
using namespace std;

class Student 
{
	
	protected:
		int roll_number;
		public:
			void  set_roll_number(int n);
			void get_roll_number();
};
void Student::set_roll_number(int r)
{
	roll_number=r;
}

void Student::get_roll_number()
{
	
	cout<<"The Roll Number is "<<roll_number<<endl;
}

class Exam:public Student
{   
    protected:
	float math;
	float physics;
	public:
	void set_marks(float ,float);
	void get_marks();	
};
void Exam::set_marks(float m1,float p1)
{
	math=m1;
	physics=p1;
}
void Exam::get_marks()
{
	
	cout<<"The marks obtained in maths are :"<<math<<endl;
	cout<<"The marks obtained in physics are :"<<physics<<endl;
}

class Result:public Exam
{
	float percentage;
	public:
		void display()
		{
			get_roll_number();
			get_marks();
			cout<<"Your precentage is "<<(math*physics)/2<<endl;
			
		}
};
int main()
{
	//Multilevel Inheritance Deep example
	// Grand father
	// father
	// child
	
	Result R;
	R.set_roll_number(148);
	R.set_marks(90,95);
	R.display();
	
	
	return 0;
}
