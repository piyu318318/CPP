//constructor
//constructor is a special Member function which is same name as class name when object is created constructor called automatically
//constructor are construct to initialize value of variable constructor always declared in public section.
//constructor does not have return type. not even void.
//constructor can allocate memory they cannot be declared in static const volatile
//constructor cannot be Virtual 
//Constructor can be overloaded 
//constructor can have default argument
//we cannot refer to constructor address

//types of constructor in cpp
//1 default constructor 2 parameterized constructor  3 copy constructor 
//4. constructor with default argument 5.dynamic constructor .


//default and para constructors 
#include<iostream>
using namespace std;

class Demo
{
	int x,y;
	public:
	Demo()
	{
		x=10;
		y=20;
		cout<<"In a default constructor ."<<endl;
		cout<<"value of x is  :"<< x<<" and value of y is : "<<y<<endl;
	}
	
	Demo(int x,int y)
	{
		cout<<"In a parameteriezed constructor ."<<endl;
		cout<<"value of x is  :"<<x<<" and value of y is : "<<y<<endl;
	}
};


int main()
{
	Demo obj ;//here default con will be called 
	
	Demo(32,53);//here para con will be called 
}
