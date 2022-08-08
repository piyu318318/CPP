#include<iostream>
using namespace std;

class circle
{
	int r;
	public:
		
	circle()
	{
		cout<<"Enter radiuis for a circle :";
		cin>>r;	
		//display();	
	}	
	
	void display()
	{
		cout<<"area of a circle :"<<(3.14*r*r);
	}
};

int main()
{
	circle obj;
	obj.display();
}
