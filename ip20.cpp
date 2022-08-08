//fibonacci series
#include<iostream>
using namespace std;
class ABC
{
	public :
	void fibo(int num)
	{
		int a=0,b=1,c;
		
		for(int i=0;i<num;i++)
		{
			c=a+b;
			cout<<" "<<c;
			a=b;
			b=c;
		}
		cout<<endl;
	}
	
	
	void fiboo(int num)
	{
	
		int a=0,b=1,c;
		
		while(num>0)
		{
			c=a+b;
			cout<<" "<<c;
			a=b;
			b=c;
			num--;
		}
	}
};


int main()
{
	ABC obj;
	int no;
	cout<<"Enter a number : ";
	cin>>no;
	obj.fibo(no);
	obj.fiboo(no);
}
