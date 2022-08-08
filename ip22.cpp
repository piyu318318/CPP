// x raise to y 
#include<iostream>
#include<math.h>
using namespace std;

class ABC
{
	public :
	void cal(float a,float b )
	{
		float c;
		c = pow(a,b);
		cout<<"a to the power is :"<<c;
	}	
};

int main()
{
	float a,b,c;
	cout<<"Enter number for a :";
	cin>>a;
	cout<<"Enter number for b :";
	cin>>b;
	ABC obj;
	obj.cal(a,b);
}
