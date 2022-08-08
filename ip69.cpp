/*constructor in derived class

In inheritance we create deerived class object.
The base class constructor are executed first then derived class constructor executed.
If we create default constrcutor in base class it need not necessary define default constructor in
derived class.
*/

//default constructor in derived class and base class
#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"In a base class constructor :"<<endl;
		}
};

class Derived : public Base
{
	public:
		Derived()
		{
			cout<<"In a derived class constructor :"<<endl;
		}
};


int main()
{
	Derived obj;
	
}
