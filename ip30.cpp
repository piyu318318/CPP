//function overloading 

#include<iostream>
using namespace std;

class Add
{
	public:
	void add(int a,int b)
	{
		cout<<"addition is : "<<a+b<<endl;	
	}

	void add(int a,int b,int c)
	{
		cout<<"addition is : "<<a+b+c<<endl;
	}
	
	void add(int a,int b,int c,int d)
	{
		cout<<"addition is : "<<a+b+c+d<<endl;
	}
	
	void add(char x,char y)
	{
		cout<<"addition is : "<<x+y<<endl;
	}
};

int main()
{
	Add obj;
	int a=10,b=20,c=30,d=40;
	char x='h',y='p';
	obj.add(a,b);
	obj.add(a,b,c);
	obj.add(a,b,c,d);
	obj.add(x,y);
	
}
