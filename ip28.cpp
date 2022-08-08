//pass by reference
//it doesnt create copy of paara 

#include<iostream>
using namespace std;

class Demo
{
	public :
	void swap(int *a,int *b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
		
		cout<<"after swapping a is :"<<*a<<" and b is "<<*b;
	}
	
};


int main()
{
	int a,b;
	Demo obj;
	cout<<"Enter first number a :";
	cin>>a;
	cout<<"Enter second number b :";
	cin>>b;
	
	obj.swap(&a,&b);
}

