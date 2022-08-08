//prime number

#include<iostream>
using namespace std;

class ABC
{
	public :
	int flag =0;
	void cal(int num)
	{
		
		for(int i=2;i<(num/2);i++)
		{
			if(num % i == 0)
			{
				flag=1;
				break;
			}
		}	
		
		if(flag==1)
			cout<<"Given number is not prime !";
		else
			cout<<"Given number is prime !";
	}
	
			
};

int main()
{
	ABC obj;
	int no;
	cout<<"enter a number : ";
	cin>>no;
	
	obj.cal(no);
}
