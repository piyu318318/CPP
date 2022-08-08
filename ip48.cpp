//palindrome using constructor

#include<iostream>
using namespace std;

class Palindrome
{
	int temp = num;
	int sum =0;
	int num;
	int digit;
	public:
	Palindrome()
	{
		cout<<"Enter a number to check palindrome :";
		cin>>num;
		
		while(num>0)
		{
			digit = num %10;
			sum  = sum *10 + digit;
			num = num/10; 
		}
		
	}	
	
	void display()
	{
			if(temp == sum)
			cout<<"Palindrome.";
			else
			cout<<"Not a palindrome.";
	}
};

int main()
{
	Palindrome obj;
	obj.display();
}
