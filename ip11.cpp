#include<iostream>
using namespace std;

class A
{
	public :
	int a=20;
	void setdata(int a)
	{
		this-> a = a;
	}
	
	
	void display()
	{
		cout<<"value of a is :"<<this->a;
	}
};


int main()
{
	A obj;
	obj.setdata(10);
	obj.display();
	return 0;
}
