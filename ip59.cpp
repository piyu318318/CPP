//multi level inheritance 
/*
class A
{
}
class B: public A
{
}
class C:public B
{
}
*/

#include<iostream>
using namespace std;

class A
{
	public:
	int x;
	
	void acc()
	{
		cout<<"Enter value of x :";
		cin>>x;		
	}	
};

class B: public A
{
	public:
	int y;
	
	void get()
	{
		acc();
		cout<<"Enter value of y :";
		cin>>y;		
	}	
};

class c:public B
{
	public:
	int z;
	
	void getdata()
	{
		get();
		cout<<"Enter value of z: ";
		cin>>z;		
	}
	
	void display()
	{
		cout<<"\nmultiplication of x,y,z is : "<<x*y*z;
	}	
};

int main()
{
	c obj;
	
	obj.getdata();
	obj.display();
}
