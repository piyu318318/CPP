//parameterized constructor in derived class

#include<iostream>
using namespace std;

class Base
{
	
	public:
		int a;
		Base(int b)
		{
			int a=b;
			cout<<"in a parent constructor"<<endl;
		}
};

class Derived:public Base
{
	int c;
	public:
		Derived(int d):Base(a)
		{
			int c=d;
			cout<<"in a child constructor";
		}
};

int main()
{
	Derived obj(10);
	return 0;
}
