//class twowheeler contain comapny and color 
//create class pulser derived from twowheeler it contain cc as data member.
//create class bullet derived from twowheeler it contain model as data member.
//acc detials and display
#include<iostream>
using namespace std;
 
class twowheeler
{
	public :
		char company[20];
		char color[20];
		
		void accept()
		{
			cout<<"Enter comapny name :";
			cin>>company;
			cout<<"Enter color :";
			cin>>color;
		}
};

class pulser : public twowheeler
{
	public:
		int cc;
		void get()
		{	
			accept();
			cout<<"Enter cc of pulser : ";
			cin>>cc;	
		}
	
		void display()
		{
			cout<<"company name :"<<company<<endl;
			cout<<"company color :"<<color<<endl;
			cout<<"pulser cc :"<<cc<<endl;
		}
};

class bullet : public twowheeler
{
	public:
		char model[20];
		void getdata()
		{	
			accept();
			cout<<"Enter model of bullet : ";
			cin>model;	
		}
		
		void display()
		{
			cout<<"company name :"<<company<<endl;
			cout<<"company color :"<<color<<endl;
			cout<<"bullet model :"<<model<<endl;
		}
	
};
 
int main()
{
	pulser p;
	bullet b;
	
	p.get();
	b.getdata();
	p.display();
	cout<<"\n";	
	b.display();
} 
