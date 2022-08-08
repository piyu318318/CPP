//crete class student rollno,name
//craete class project project no and project name
//create class stud_proj inherit from class student and project and it contain duration time 
//accept details

#include<iostream>
using namespace std;

class student
{
	public:
	
	int rollno;
	char sname[20];
	void accept1()
	{
		cout<<"Enter roll number :";
		cin>>rollno;		
		cout<<"Enter student  name :";
		cin>>sname;
	}
		
};

class project 
{
	public :
	int pno;
	char pname[20];
	void accept2()
	{
		cout<<"Enter project number :";
		cin>>pno;		
		cout<<"Enter project name :";
		cin>>pname;
	}		
};

class stud_proj : public student,public project
{
	public :
		int days;
		void acc()
		{
			accept1();
			accept2();
			cout<<"Enter how many days consumed to complete project :";
			cin>>days;
		}
		
		void display()
		{
			cout<<"\n";
			cout<<"Student roll number :"<<rollno<<endl;		
			cout<<"Student name :"<<sname<<endl;
			cout<<"project number :"<<pno<<endl;		
			cout<<"project name :"<<pname<<endl;
			cout<<"Time required to complete the project :"<<days<<endl;
		
		}
};
int main()
{
	stud_proj obj;
	obj.acc();
	obj.display();
}

