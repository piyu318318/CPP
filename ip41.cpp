/*
write a program to create a complex which containing member real and imaginary.
write a program to cal and display sum of 2 complex number by using friend function and return
an object.
*/

#include<iostream>
using namespace std;

class complex2;//forward declaration
class complex1
{
	int imag,real;
	public :
		void accept()
		{
			cout<<"Enter first real number : ";
			cin>>real;
			cout<<"Enter first imaginary number : ";
			cin>>imag;
			
		}
		
		friend void sum(complex1,complex2);
};


class complex2
{
	int imag,real;
	
	public :
		void accept()
		{
			cout<<"Enter first real number : ";
			cin>>real;
			cout<<"Enter first imaginary number : ";
			cin>>imag;
			
			
		}
		
		friend void sum(complex1 c1,complex2 c2)
		{
			int sumofimag;
			int sumofreal;
			
			sumofimag = c1.imag + c2.imag;
			sumofreal = c1.real + c2.real;
		
			cout<<"Addition of imaginary and real number is : "<<sumofreal<< "+" <<sumofimag<<"i";		
		}
};

int main()
{
	complex1 obj1;
	complex2 obj2;
	
	obj1.accept();
	obj2.accept();
	
	sum(obj1,obj2);
	return 0;
}


