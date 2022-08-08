#include<iostream>
using namespace std;

class A
{
	public :
		void perfect(int num)
		{
			float temp = num;
			int div = num/2;
			int sum=0;
			
			while(div>=1)
			{
				if(num % div == 0)
				{
					sum = sum + div;
					div--;
				}
				else
					div--;
			}
			
			if(temp == sum)
				cout<<"perfect number :";
			else
				cout<<"not a perfect number ";
			
		}
	
};


int main()
{
	A obj;
	int no;
	cout<<"Enter a numner to check perfect or not :";
	cin>>no;
	obj.perfect(no);
}
