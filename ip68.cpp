/*
virtual base class

when all three types of inheritance invoked together at that time virtual inheritance is used.
class A
{
}
class B:virtual public A
{
}
class C:virtual public A
{
}
class D:public B,public C
{
}

here class D accpets property iof classs A with classses B and C.
It creates ambiguiti that is class A propoerty invoked class D twice.
to solve this problem c++ provide virtual base class.

*/


#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		void getno()
		{
			x=10;
		}
};


class B :public virtual  A
{
	public:
		int y;
		void getnum()
		{
			y=20;
		}
};

class c :public virtual  A
{
	public:
		int z;
		void getnumber()
		{
			z=30;
		}
};

class D : public B, public C
{
	public :
		int z;
		void calculation()
		{
			getno();
			getnum();
			getnumber();
			cout<<"Addition of a number is :"<<x+y+z;
		}
};

int main()
{
	D obj;
	obj.calculation();
}
