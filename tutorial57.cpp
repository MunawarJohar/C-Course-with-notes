#include<iostream>
#include<string>
using namespace std;


class CWH
{
	
	protected:
		string title;
		float ratting;
		public:
			CWH(string s,float r)
			{
			title=s;
			ratting=r;	
			}
			
			virtual void display()
			{
				
			}
			
			
			//if virtual is skipt then this display functions is class two times 
};
class CWHVideo:public CWH
{
float videolength;
public:
   CWHVideo(string s,float r,float vl):CWH(s,r)
   {
   	
   	videolength=vl;
	   }	
 void display()
	{
		cout<<"This is an amazing video with title  "<<title<<endl;
		cout<<"Rating : "<<ratting<<"cout of 5 stars "<<endl;
		cout<<"Lenght of this video is  :"<<videolength<<"minutes "<<endl;
	}
};

class CWHText:public CWH
{
int words;
public:
   CWHText(string s,float r,float wc):CWH(s,r)
   {
   	
   	words=wc;
	   }	
	void display()
	{
		cout<<"This is an amazing text tutorial with title "<<title<<endl;
		cout<<"Rating of this text tutorial : "<<ratting<<"  cout of 5 stars"<<endl;
		cout<<"No of words in this text tutorial is :"<<words<<" words"<<endl;
	}
};
int main()
{
	
// Virtual functions Example + creation Rules in c++
string title;
float ratting,vlen;
int words;
// for code with harry video
title="Django tutorial ";
vlen=4.54;
ratting=4.88;


CWHVideo djVideo(title,vlen,ratting);
 //  djVideo.display();
 


// for code with harry text
title="Django tutorial text ";
words=4.54;
ratting=4.88;


CWHText djtext(title,words,ratting);
  // djtext.display();


CWH* tuts[2];
tuts[0]=&djVideo;
tuts[1]=&djtext;


tuts[0]->display();
tuts[1]->display();

//Rulesfor virtual functions 
// thry can not be static
// they are accessed by object pointer
// A virtual function is defined is a base class they they do not require another class 
// virtual function can be friend of another class

	return 0;
}
