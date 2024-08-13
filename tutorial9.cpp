//control structures 
//there is three structure
//1.sequence structure     2.selection structure                          3. loop structure 
//entry                             Entry                                    Entry
//Action 1                  true < condition> false                                  Loop
//Action 2                A1                   A2                         Condition  True A1
//Exit                              Exit                                     false
//                                                                        A2
//                                                                      Exit
//
//
// 1.if else statement                       2. if else ladder       3.Switch case              
//if (i<5)                                                        switch (Expression)
//  {                                                               {case 1:
//   cout<<i;                                                     cout<<"Action 1 is "<<a;
//                                                                   }
//   i++;                                                          default ;
// }                                                           { cout <<"Action two is "<<a2;
//                                                              }
#include<iostream>
using namespace std;
int main()
{
	//if else ladde
	char ch;
	cout<<"Enter the number";
	cin>>ch;
	switch(ch){
		case 'a':
			cout<<"You enter a";
			break;
		case 'e':
			cout<<"Enter e";
			break;
		case 'i':
			cout<<"Enter i";
			break;
			
		case 'o':
			cout<<"Enter o";
			break;
			
		case 'u':             cout<<"Enter u";
		                    break;
		default:
		                    cout<<"You enter consonent";
		                    break;
	}
	return 0;
	
}
