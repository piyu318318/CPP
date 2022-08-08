#include<iostream>
using namespace std;

class product
{
	public :
		int pid;
		float price;
		char pname[20];
		
		void accept()
		{
			cout<<"Enter product id :";
			cin>>pid;
			cout<<"Enter a  produuct name :";
			cin>>pname;
			cout<<"Enter a  produuct price :";
			cin>>price;
		}
		
		void display()
		{
			cout<<"product id is : "<<pid;
			cout<<" product name is : "<<pname;
			cout<<" product price is : "<<price<<endl;
			
		}
};

int main()
{
	int n;
	product p[10];
	cout<<"Enter how many products you want : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		p[i].accept();
	}
	
	/*
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		p[i].display();
	}
	*/
	
	float max = p[0].price;
	
	for(int i=0;i<n;i++)
	{
		if(max < p[i].price)
		{
			max = p[i].price;	 	
		}	
	}
	
	
	cout<<"maximum product details : ";
	for(int i=0;i<n;i++)
	{
		if(max == p[i].price)
		{
			
			p[i].display();
		//	cout<<"\n maximum pice is : "<<max;
		}
	}
	
		
}
