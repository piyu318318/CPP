//static variables netx ip34.cpp is of example of static functions  
//static members does not belong to any objects but belongs to class
////all obj of a class shares same copy of static member
//only copy of static member is createed and and all objects stores same members.

#include<iostream>
using namespace std;

class student
{
	public :
	static char hod[20];
	char sname[20];
	float per;
	void accept();
	void display();
};

//char bcoz hod is written in character
char student ::  hod[20]="geevan sir ";

void student :: accept()
				{
					cout<<"Enter name of student :"<<endl;
					cin>>sname;
					cout<<"percentage of a student is :"<<endl;
					cin>>per;
				}
				
void student :: display()
				{
					cout<<"name of the HOD of a student is : "<<hod<<endl;
					cout<<"name of the student is : "<<sname<<endl;
					cout<<"percentage of a student is "<<per<<endl;
				}


int main()
{
	int n;
	
	cout<<"Enter how many students youo want : ";
	cin>>n;
	student s[n]; //array of objects
	
	for(int i=0;i<n;i++)
	{
		s[i].accept();
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		s[i].display();
	}
	

	return 0;
} 
