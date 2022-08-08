//static functions
//static function cannot access non static members 
//static functions belongs to class does not belongs to any object.
//hence static members does not requre object to acesss objects.

#include<iostream>
using namespace std;

class A
{
	public	:
		static void display()
		{
			cout<<"its a staic methood i dont belong to any object but belongs to class ";
		}
};

int main()
{
	A :: display();
}

