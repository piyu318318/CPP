//armstrong
#include<iostream>
using namespace std;

class ABC
{
	public :
	void armstrong(int num)
	{
		int cnt=0;
		int temp=num,temp2=num;
		int sum=0;
		while(num>0)
		{
			num = num/10;
			cnt++;
		}
		
		int mul=1;
		
		while(temp>3)
		{
			int digit = num %10;
			
			for(int i=0;i<cnt;i++)
			{
				mul = mul * digit;
			}
			
			sum += mul;
			temp = temp/10;
		}
		
		if(sum == temp2)
			cout<<"armstrong";
		else
			cout<<"not armstrong";
	}
	

};

int main()
{
	ABC obj;
	int no;
	cout<<"Enter a number : ";
	cin>>no;
	
	obj.armstrong(no);
}
