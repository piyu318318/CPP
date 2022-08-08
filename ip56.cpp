//single inherti
//wap to create class account contain accno, name.
//create class saving derived from account contain balance

#include<iostream>
using namespace std;

class account
{
	public :
		
		int accno;
		char name[20];
		void acc()
		{
			cout<<"Enter account number :";
			cin>>accno;
			cout<<"Enter account name :";
			cin>>name;
		}
	
};


class saving : public account
{
	float balance;
	public:
	void get()
	{
		acc();
		cout<<"Enter balalnce :";
		cin>>balance;
	}
	
	void display()
	{
		cout<<"\n";
		cout<<"Account name is :"<<name<<endl;
		cout<<"Account number is :"<<accno<<endl;
		cout<<"Account balance is :"<<balance<<endl;
	}
};


int main()
{
	int n;
	cout<<"How many accounts you want : ";
	cin>>n;
	saving s[n];
	
	for(int i=0;i<n;i++)
	{
		//s[i].acc();
		s[i].get();
	}
	
		for(int i=0;i<n;i++)
	{
		s[i].display();
	}
}
