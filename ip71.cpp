//parameterized constructor in derived class
//wap to create multiple constructor inheritance (parameterized)

#include<iostream>
using namespace std;

class A
{
	public:
		int x;
	A(int a)
	{
		x=a;
		cout<<"area of circle is : "<<3.14*x*x<<endl;
	}
};

class B
{
	public :
	int y,z;
	B(int c,int d)
	{	
		y=c;
		z=d;
		cout<<"multiplication of two numbers are :"<<y*z<<endl;
	}
};

class C:public A,public B
{
	public:
		int p,q,r;
		
		C(int e,int f,int g):B(y,z),A(x)
		{
			p=e;
			q=f;
			r=g;
			cout<<"addistion of three numbers is :"<<p+q+r<<endl;
		}
};

int main()
{
	C obj(1,3,3);
	return 0;
}
