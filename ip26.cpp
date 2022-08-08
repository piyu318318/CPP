//acccept student details id,name percentage 
//display only first class student  and count the number of students 

#include<iostream>
using namespace std;

class Student
{
	public :
		int sid;
		char sname[20];
		float per;

		
		void accept()
		{
			cout<<"Enter student id :";
			cin>>sid;
			cout<<"Enter student name :";
			cin>>sname;
			cout<<"Enter student percentage :"<<endl;
			cin>>per;
		}
		
		void display()
		{
			cout<<"Student id is :"<<sid;
			cout<<" Student name is :"<<sname;
			cout<<" Student percentage is :"<<per<<endl;			
		}
};

//int student :: count=0;

int main()
{
	
	int n;
	cout<<"How many students you want : ";
	cin>>n;
	
	Student S[n];
	static int count=0;
	
	for(int i=0;i<n;i++)
	{
		S[i].accept();
	}
	
	
	cout<<"\nFirst class gradde Students are as follow :";
	for(int i=0;i<n;i++)
	{
		if(S[i].per < 80 && S[i].per >= 65 )
		{
			cout<<"\n";
			S[i].display();
			count++;
		}
	
	}
	cout<<"\ count of nnumber of students who got first class are  :"<<count;
}
