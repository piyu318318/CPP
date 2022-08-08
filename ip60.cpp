//wap create class train . it has train number train  name.
//create class root derived from train it contain rootid , source , destination.
//create class reservation derived from root contain seat no, seatclass and date.
//acc details and display

#include<iostream>
using namespace std;

class train
{
	public:
	int no;
	char name[20]; 
	
	void acc()
	{
		cout<<"Enter train number :";
		cin>>no;
		cout<<"Enter train name :";
		cin>>name;	
	}	
};

class root : public train
{
	public:
		
	int rootid;
	char source[20];
	char destination[20];
	void get()
	{
		
		cout<<"Enter root id of a train :";
		cin>>rootid;
		cout<<"Enter source of a train:";
		cin>>source;
		cout<<"Enter destination of a train:";
		cin>>destination;	
	}	
};

class reservation : public root
{
	public:
		
	int seatno;
	char seatclass[10];
	char date[20];
	void getdata()
	{	
		acc();
		get();
		cout<<"Enter seat number :";
		cin>>seatno;
		cout<<"Enter seat class :";
		cin>>seatclass;
		cout<<"Enter date of a train :";
		cin>>date;
	}	
	
	void display()
	{
		cout<<"train number :"<<no<<endl;
		cout<<"train name :"<<name<<endl;
		cout<<"root id of a train :"<<rootid<<endl;
		cout<<"source of a train:"<<source<<endl;
		cout<<"destination of a train:"<<destination<<endl;
		cout<<"seat number :"<<seatno<<endl;
		cout<<"seat class :"<<seatclass<<endl;
		cout<<"date of a train :"<<date<<endl;
	}
};

int main()
{
	reservation obj;
	obj.getdata();
	obj.display();
}
