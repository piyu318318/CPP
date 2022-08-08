/*dynamic constructors
A dynamic constructors allocate memory for an object .
we can use dyanamic con. to allocate memory for an object whwn it is created.
we use "new " and delete operator to allocate and deallocate memory .
*/
#include<iostream>
using namespace std;
class Demo
{
	const char *p;
	
	public:
	
	Demo()
	{
		p = new char[6];
		p="piyush";
	}
	
	void display()
	{
		cout<<p<<endl;
	} 
};

int main()
{
	Demo obj;
	obj.display();
}


