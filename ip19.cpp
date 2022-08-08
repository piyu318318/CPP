//reverse a number
#include<iostream>
using namespace std;

class ABC
{
	public:
		
	void reverse(int num)
	{
		
		int digit;
		//int temp=num;
		int sum=0;
		while(num > 0 )
		{
			digit = num % 10;
			sum = sum *10 + digit;
			num = num/10;
		}	
		cout<<"reversed number is by first method : "<<sum;
	}
	
	
	int rev(int num)
	{
	cout<<"\nreversed number is by second method : ";
	int digit;
		while(num>0)
		{
			digit= num %10;
			cout<<digit;
			num = num /10;
		}	
	}
};


int main()
{
	int no;
	cout<<"Enter a number : ";
	cin>>no;
	ABC obj;
	obj.reverse(no);	
	obj.rev(no);	
	return 0;
}
