//create class person contain person name, add,mobile
//create class emp contain empno, name
//create class principle contain degree,specification,sal
//accept n principles details and display max salary and details.

#include<iostream>
using namespace std;

class person
{
	public: 
	
	char pname[20];
	char add[20];
	int mobile;
	
	void acc()
	{
		cout<<"Enter person name :";
		cin>>pname;
		cout<<"Enter person address :";
		cin>>add;
		cout<<"Enter person mobile numebr :";
		cin>>mobile;
	}
};

class emp: public person
{
	public :
		int	eno;
		char ename[20];
		
		void get()
		{
			cout<<"Enter employee number :";
			cin>>eno;
			cout<<"employee name :";
			cin>>ename;
		}
		
};

class principle:public emp
{
	public:
		
		char degree[20];
		char specification[20];
		float salary;
		
		void getdata()
		{
			acc();
			get();
			cout<<"Enter degree :";
			cin>>degree;
			cout<<"Enter specification :";
			cin>>specification;
			cout<<"Enter salary :";
			cin>>salary;
		}
		
		
		void display()
		{
			cout<<"person name :"<<pname<<endl;
			cout<<"person address :"<<add<<endl;
			cout<<"person mobile number :"<<mobile<<endl;
			cout<<"Employee number :"<<eno<<endl;
			cout<<"Employee name :"<<ename<<endl;
			cout<<"Degree :"<<degree<<endl;
			cout<<"specification :"<<specification<<endl;
			cout<<"salary :"<<salary<<endl;
		}
		
};

int main()
{
	int n;
	cout<<"How many principles you want :";
	cin>>n;
	
	principle p[n];
	
	for(int i=0;i<n;i++)
	{
		p[i].getdata();
	}
	
	
	//
	float max;
	
	max = p[0].salary;
	
	for(int i=0;i<n;i++)
	{
		if(max<p[i].salary)
		{
			max = p[i].salary;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(p[i].salary == max)
		{
			cout<<"\n";
			cout<<"maximum salary emp detail is : ";
			p[i].display();
		}
	}
}
