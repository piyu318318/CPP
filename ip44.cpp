//factorial program using constructor

#include<iostream>
using namespace std;

class Fact
{
	public:
		
	Fact()
	{
		int no,sum=1;
		cout<<"Enter a number to check factorial : ";
		cin>>no;
		while(no>0)
		{
			sum = sum * no;
			no--;
		}
		
		cout<<"factorial of a number is :"<<sum;
	}
	
};

int main()
{
	Fact f1;
}
