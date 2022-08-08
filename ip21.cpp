//sum of 1 to n numbers

#include<iostream>
using namespace std;

class ABC
{
	public :
	void addupton(int num)
	{
		int sum =0;
		for(int i=0;i<=num;i++)
		{
			sum = sum + i;
		}
		cout<<"addition of number 1 to "<<num<<" is :"<<sum;
	}
};


int main()
{
	int no;
	cout<<"Enter a number : ";
	cin>>no;
	ABC obj;
	obj.addupton(no);		
} 
