#include<iostream>
using namespace std;

struct student
{
	int sid;
	float per;
	char sname[20];
}s;

int main()
{
	//struct student s;
	cout<<"Enter roll number for student :";
	cin>>s.sid;
	cout<<"\nEnter name for student :";
	cin>>s.sname;
	cout<<"Enter percentage for student :";
	cin>>s.per;
	cout<<"student id is :"<<s.sid<<"\nstudent name is :"<<s.sname<<"\nstudent percentage :"<<s.per<<"%"<<endl;
	
	return 0;
}
