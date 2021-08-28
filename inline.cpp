/*1. Implement inline function for the following programs-
a. Square of the number
b. Cube of the number
c. Area of rectangle */

#include<iostream>

using namespace std;

class a
{
	int a,l,b;
	public:
	
	inline void square()
	{
		cout<<"enter a number:";
		cin>>a;
		cout<<"square of number:"<<a*a;
	}
	
	inline void cube()
	{
		cout<<"\n enter a number:";
		cin>>a;
		cout<<"\n cube of number:"<<a*a*a;
		
	}
	
	inline void rect()
	{	
		cout<<"\n enter l & b:";
		cin>>l>>b;
				
		cout<<"\n area of rectangle:"<<l*b;
		
	}
};

int main()
{

a a1;
a1.square();
a1.cube();

a1.rect();
}


		
