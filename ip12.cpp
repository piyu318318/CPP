//static member 
#include<iostream>
using namespace std;

class A
{
	public :
	static int x;
};

int A :: x=10;


int main()
{
	cout<<"value of x is :"<<A::x;
	return 0;
}




