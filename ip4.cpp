#include<iostream>
using namespace std;

union student 
{
	char sname[20];
	int sid;
	float per;
}s1;

int main()
{
	cout<<"Enter roll number for student :";
	cin>>s1.sid;
	cout<<"Enter name for student :";
	cin>>s1.sname;
	cout<<"Enter percentage for student :";
	cin>>s1.per;
	
	cout<<"roll no student :"<<s1.sid;
	cout<<"\nname of student :"<<s1.sname;
	cout<<"\npercentage of student :"<<s1.per;
}
