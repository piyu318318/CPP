//wap base class animal contain name and color
//create derived class dog from animal contain property as a data member 
//acc and display

#include<iostream>
using namespace std;

class animal
{
		
	public :
	char name[10];
	char color[20];
	
	void accept()
	{
		cout<<"Enter name :";
		cin>>name;
		cout<<"Enter color :";
		cin>>color;
	}	
};

class dog: public animal
{
	char property[20];
	public:
	
	
	void get()
	{
		cout<<"Enter property of dog :";
		cin>>property;
	}
	
	void display()
	{
		cout<<"\n";
		cout<<"name of dog is :"<<name<<endl;
		cout<<"collor of dog is :"<<color<<endl;
		cout<<"property of dog is :"<<property<<endl;
	}
	
};

int main()
{
	dog d;
	d.accept();
	d.get();
	d.display();
	
}
