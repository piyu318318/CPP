/*
Destructor is an instance member function which is invoked automatically whenever an object is 
going to be destroyed. Meaning, a destructor is the last function that is going to be called 
before an object is destroyed.
Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor. 
Destructor has the same name as their class name preceded by a tiled (~) symbol.
It is not possible to define more than one destructor. 
The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
Destructor neither requires any argument nor returns any value.
It is automatically called when object goes out of scope. 
Destructor release memory space occupied by the objects created by constructor.
In destructor, objects are destroyed in the reverse of an object creation
Using Destructor we can deallocate the memory.
If we do not write our own destructor in class, compiler creates a default destructor for us.
The default destructor works fine unless we have dynamically allocated memory or pointer in class.
When a class contains a pointer to memory allocated in class, we should write a destructor to 
release memory before the class instance is destroyed. This must be done to avoid memory leak.
*/

#include<iostream>
using namespace std;

class Test
{
	public:
	Test()
	{
		cout<<"In a constructor !"<<endl;
	}
	
	~Test()//destructor
	{
		cout<<"In a destructor !"<<endl;	
	}
};

int main()
{
	Test t1;
	//Test t1,t2,t3;
}
