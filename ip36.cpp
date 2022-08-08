//the private data members of the classs can only access by member function of class
//however there may be situation in which we want non member function to access private data member 
//we know private data member cannot acccess outside the function because all the functions are under data hiding that
//is only access within the class.
//but many time it happens that private member function we want to access another class 
/*
A friend function of a class is defined outside that class' scope but it has the right to access all private 
and protected members of the class. Even though the prototypes for friend functions appear in the class definition, 
friends are not member functions.
A friend can be a function, function template, or member function, or a class or class template, in which 
case the entire class and all of its members are friends.
*/

//it has object as argument.

#include<iostream>
using namespace std;

class Demo
{
	int a,b; 	//default int x,y is private 
	
	public :
	void acc()
	{
		 cout<<"enter value for a :";
		 cin>>a;
		 cout<<"enter value b :";
		 cin>>b;	
	}
	
	friend void add(Demo obj);
};

void add(Demo obj)
	{
		 	int c;
		 	c = obj.a+obj.b;
		 	cout<<"sum is : "<<c;
		 	
	}


int main()
{
	Demo d1;
	d1.acc();
	add(d1);
	
	return 0;
}
