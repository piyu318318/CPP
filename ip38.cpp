//write a program to check a given number is odd or even using friend function.

#include<iostream>
using namespace std;


class Demo
{
	int num;
	public :
	
	void acc()
	{
		cout<<"Enter a number : ";
		cin>>num;	
	}	
	
	friend void check(Demo obj);
};


void check(Demo obj)
{
	if(obj.num % 2 == 0)
		cout<<"number is even .";
	else
		cout<<"number is odd .";
}

int main()
{
	Demo d1;
	d1.acc();
	check(d1);
	
}


