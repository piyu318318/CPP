#include<iostream>
using namespace std;

int main()
{
	typedef int piyush;
	piyush m1,m2,m3;
	
	cout<<"enter marks for maths  out of 100 :";
	while(1)
	{
		cin>>m1;
		if(m1<0 || m1>100)
		{
			cout<<"pls enter valid marks !! ";
		}
		else 
		break;
	}
	
	cout<<"enter marks for science  :";
	while(1)
	{
		cin>>m2;
		if(m2<0 || m2>100)
		{
			cout<<"pls enter valid marks !! ";
		}
		else 
		break;
	}
	
	cout<<"enter marks for history  :";	
	while(1)
	{
		cin>>m3;
		if(m3<0 || m3>100)
		{
			cout<<"pls enter valid marks !! ";
		}
		else 
		break;
	}
	
	

	

	float total=(m1+m2+m3);
	float avg=(m1+m2+m3)/3;
	cout<<"total marks are : "<<total;
	cout<<"\navaerage of these 3 marks are :"<<avg;
	return 0;
}
