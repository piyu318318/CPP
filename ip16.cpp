//sum of number 
#include<iostream>
using namespace std;
class ABC
{
	public :
	
	void calculate(int num)
	{
		int r,sum=0;
		
		while(num>0)
		{
			r= num%10;
			sum = sum +r;
			num = num/10;
		}		
		
		cout<<"sum of the entered number is :"<<sum;
	}
};


int main()
{
	ABC obj ;
	int no;
	
	cout<<"Enter the number : ";
	cin>>no;
	
	obj.calculate(no);
	return 0;
}
