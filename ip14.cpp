//factorial
#include<iostream>
using namespace std;

class A
{
	public :
		
		
		void fact(int num)
		{
			float sum=1;
			
			while(num>1)
			{
			
				sum =  sum * num;
				
				num--;
			}
			
			cout<<"factorial is :"<<sum;		
		}
};

int main()
{
	A obj;
	int no;
	
	cout<<"Enter a number to find out factorial of that number : ";
	cin>>no;
	obj.fact(no);
}
