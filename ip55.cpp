//one class aquire property of anorther class object with its own property is called as  inheritance.
//A base class is also called parent class or superclass
//Child class is slaso called as derived class.
//single inheritance 


#include<iostream>
using namespace std;

class A
{
	public :
	int x;
	void accept()
	{
		cout<<"Enetr value for x :";
		cin>>x;	
	}
		
};

class B : public A 
{
	public :
		int y;
		
		void getdata()
		{
			cout<<"Enter value for y :";
			cin>>y;
		}
		
		void display()
		{
			cout<<"Multiplication of x and y is :"<<x*y;
		}
};

int main()
{
	B obj;
	obj.accept();
	obj.getdata();
	obj.display();
}


