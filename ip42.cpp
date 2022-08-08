//write a program to add two function number by using friend class

#include<iostream>
using namespace std;

class num2;//forward declaration

class num1
{
	int number1;
		
	public :
	void accept()
	{
		cout<<"Enetr first number :";
		cin>>number1;	
	}
	
	friend void addition(num1,num2); 	
};

class num2
{
	int number2;
	
	public:
	void accept()
	{
		cout<<"Enetr second number :";
		cin>>number2;	
	}
	
	friend void addition(num1 n1,num2 n2)
	{
		int addition ;
		addition = n1.number1 + n2.number2;
		cout<<"Addition of two numbers is :"<<addition;
	}
};


int main()
{
	num1 obj1;
	num2 obj2;
	
	obj1.accept();
	obj2.accept();
	
	addition(obj1,obj2);
}
