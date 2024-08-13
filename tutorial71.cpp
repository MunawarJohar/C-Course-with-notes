#include<iostream>
#include<vector>


using namespace std;

void Display(vector<int> &v)
{
	for (int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	//	cout<<v.at[i]<<"";
	}
	cout<<endl;
}

int main()
{
	// Vector in c+++
	// c vector method in c++
	
	vector<int> vec1;
	
		vector<int> vec2(4);
		
			//vector<char> vec3(vec2);
			
				//vector<char> vec4(6,13);
				//Display(vec4);
	
	int element,size;
	cout<<"Enter the size of vector "<<endl;
	cin>>size;
	
	for(int i=0;i<4;i++)
	{
		cout<<"Enter an element to add to this vector";
		cin>>element;
		vec1.push_back(element);
	
	}
//	vec1.pop_back();

Display(vec1);
vector<int>::iterator iter=vec1.begin();
vec1.insert(iter+1,50,566);


// vec1.insert(iter+1,50);
	Display(vec1);
	return 0;
}
