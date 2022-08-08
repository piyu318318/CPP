//wap create class student contain rolllno, name and subject 
//create derived class exam sontain sub code, 3 practical marks , thoery of 6 subjects 
//display total practical marks total theory marks and percentage.

#include<iostream>
using namespace std;

class student
{
	public :
		int roll;
		char name[20];
		
		void accept()
		{
			cout<<"Enter roll number : ";
			cin>>roll;
			cout<<"Enter name : ";
			cin>>name;
		}
};

class exam:public student
{
	public:
		int T[6],P[3];
		float sumt=0,sump=0;
		
		void get()
		{
			accept();
			
			//cout<<"Enter thoery for 6 subjects: "<<endl;
			for(int i=0;i<6;i++)
			{
				cout<<"\nEnter thoery subject "<<i+1<<" marks out of 100:";	
				cin>>T[i];
				sumt = sumt + T[i];
			}
			
			
			for(int i=0;i<3;i++)
			{
				cout<<"\nEnter practial subject "<<i+1<<" marks out of 100:";	
				cin>>P[i];
				sump = sump + P[i];
			}
		}
		
		
		void display()
		{
			float total ;
			float percentage ;
			total = sumt+sump;
			percentage= (total/900 * 100);
			cout<<"Roll number of a student is  :"<<roll<<endl;
			cout<<"Name of a student is  :"<<name<<endl;
			cout<<"Total of marks is : "<<total<<endl;
			cout<<"percentage of a student is  :"<<percentage<<endl;
		}
			
};



int main()
{
	int n;
	cout<<"How many students you want : ";
	cin>>n;
	exam e[n];
	
	for(int i=0;i<n;i++)
	{
		e[i].get();
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		e[i].display();
	}
}
