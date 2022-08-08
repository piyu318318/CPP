//parameterized constructor
#include<iostream>
using namespace std;


class Area
{
	
	public:
	
	Area(){}
	
	Area(int a,int b)
	{
		cout<<"area is :"<<a*b;
	}
};


int main()
{
	Area obj;
	Area(10,30);
	return 0;
}
