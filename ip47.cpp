#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
	int eno;
	char ename[20];
	public:
	Emp()
	{
		cout<<"Enter the employee id and name :";
		cin>>eno>>ename;
	}
	
	Emp(int eid,char nm[20])
	{
		eno=eid;
		strcpy(ename,nm);
	}
	
	void show()
	{
		cout<<"employee id is :"<<eno<<endl;
		cout<<"employee name is :"<<ename<<endl;
	}
};

int main()
{
	Emp e1,e2(12,"piyush");
	e1.show();
	e2.show();
}
