//this pointer in cpp

#include<iostream>
using namespace std;

class Thispointer
{
	int x,y;
	
	public:
	Thispointer()
	{
		cout<<"Entyer value for x :";
		cin>>this->x;
		cout<<"Entyer value for y :";
		cin>>this->y;
		this->show();
	}
	
	void show()
	{
		cout<<"value of x is "<<x<<endl;
		cout<<"value of y is "<<y<<endl;
	}	
};

int main()
{
	Thispointer t1,t2;
}
