//hierachical inheritance
//one base class many derived class
//all derived class parant is base class
/*
class A
{
}
class B :public A
{
}
class C :public A
{
}
class D: public A
{
}
*/

#include<iostream>
using namespace std;

class A
{
	public:
	int x,y;
	void acc()
	{
		cout<<"Enter value for x :";
		cin>>x;
		cout<<"Enter value for y :";
		cin>>y;	
	}	
};


class B : public A
{
	public:
	void mul()
	{
		acc();
		cout<<"multiplication of two numbers is :"<<x*y;
	}
};


class C : public A
{
	public:
		
	void add()
	{
		acc();
		cout<<"addition of two numbers is :"<<x+y;
	}
};

class D : public A
{
	public:
	void sub()
	{
		acc();
		cout<<"subtraction of two numbers is :"<<x-y;
	}
};

int main()
{
	B b1;
	C c1;
	D d1;
	d1.sub();
	b1.mul();
	c1.add();
	
}
