/*Demonstrate static member function with static data member in one
class. */

#include<iostream>
using namespace std;

class a
{

	static int x;
	public:
	
	static void func()
	{	
		cout<<"enter value of x:";
		cin>>x;
		
		cout<<"\n the value of x:"<<x;
		
	}
	
};

 int a::x;
 
 
 int main()
 {
 
 a a1;
 a1.func();
 }
