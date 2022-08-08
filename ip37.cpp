//write a program to find out maximum number of two objects using friend function

#include<iostream>
using namespace std;

class Demo
{
	
	int a,b; //private variable
	
	public :
		
	void accept()
	{
		cout<<"Enter value for a :";
		cin>>a;
		cout<<"Enter value for b :";
		cin>>b;
	}
	
	friend void  max(Demo obj);
};


void max(Demo obj)
{
	if (obj.a>obj.b)
		cout<<"maximum is :"<<obj.a;
	else if(obj.a<obj.b)
		cout<<"maximum is :"<<obj.b;
	else
		cout<<"both are equal.";
}

int main()
{
	Demo d1;
	d1.accept();
	max(d1);
}
