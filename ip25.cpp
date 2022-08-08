//aceept n details from user of emp
//display emp whoes sal=1000<sal

#include<iostream>
using namespace std;
class Emp 
{
	public :
		int eid;
		float sal;
		char ename[20];
		
		void accept()
		{
			cout<<"Enter eid for employee : ";
			cin>>eid;
			
			cout<<"Enter name for employee : ";
			cin>>ename;
			
			cout<<"Enter salary for employee : "<<endl;
			cin>>sal;
			
			eid++;
		}
		
		void display()
		{
			cout<<"Employee id is :"<<eid;
			cout<<" Employee name is :"<<ename;
			cout<<" Employee sal is :"<<sal<<endl;
			
		}
		
};

int main()
{
	
	int n;
	cout<<"How many employees you want : ";
	cin>>n;
	Emp E[n]; //array of objects of emp class
	
	for(int i=0;i<n;i++)
	{
		E[i].accept();	
	}
	
	
	/*
	//will print all details of emp
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		E[i].display();	
	}
	*/
	
	
	//will print deaills of emp whoes sal <1000
	for(int i=0 ;i<n; i++)
	{
		if(E[i].sal<1000)
		{
			E[i].display();
		}
	}
	
	return 0;
}
