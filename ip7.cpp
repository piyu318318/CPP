#include<iostream>
using namespace std;

int x=10;//global

int main()
{
	int x=20;//local
	
	cout<<"\nvalue of local x variable : "<<x;
	cout<<"\nvalue of global x variable : "<<::x;
	{
		int x=5;//local
		cout<<"\nvalue of local x variable : "<<x;
		cout<<"\nvalue of global x variable : "<<::x;
	}
	
}
