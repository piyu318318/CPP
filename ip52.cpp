#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
	char *fname,*lname;
	
	public :
			
	Demo(char f[], char l[])
	{
		int x=strlen(f);
		fname = new char[x+1];
		strcpy(fname,f);
		
		int y=strlen(l);
		lname = new char[y+1];
		strcpy(lname,l);
		
	}	
	
	void display()
	{
		cout<<"first name : "<<fname<<endl;
		cout<<"last name : "<<lname<<endl;
	}
	
};

int main()
{
	Demo obj1("piyush","dixit");
	Demo obj2("india","bharat");
	
	obj1.display();
	obj2.display();
}
