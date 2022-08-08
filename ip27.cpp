//call by value 
//swap
#include<iostream>
using namespace std;
class Demo
{
	public:
	void swap(int x,int y)
	{
		int temp; 	
		temp=x;
		x=y;
		y=temp;
		
	cout<<"after swapping a :"<<x<<"  b:"<<y;
	}
	
};


int main()
{
	int a,b;
	
	cout<<"Enter a first number a:";
	cin>>a;
	cout<<"Enter a second number b:";
	cin>>b;
	Demo obj;
	obj.swap(a,b);
}
