//multiple inheritance 
//one child has many base(parent) class
/*
class A
{
}
class b
{
}
class c
{
}
class D : public A, public B, public C
{
}
*/

#include<iostream>
using namespace std;

class A
{
	public:
	int x;
	void acc1()
	{
		cout<<"Enter value of x :";
		cin>>x;	
	}
};

class B
{
	public:
		int y;
		void acc2()
		{
			cout<<"Enter value of y :";
			cin>>y;
		}
};

class C
{
	public:
		int z;
		void acc3()
		{
			
			cout<<"Enter value of z :";	
			cin>>z;
		}
};

class D:public A,public B,public C
{
	public:
		void calculation()
		{
			acc1();
			acc2();
			acc3();
			cout<<"multiplication of x y z is : "<<x*y*z<<endl;
			cout<<"addition of x y z is : "<<x+y+z;
		}
};

int main()
{
	D obj;
	obj.calculation();
}
