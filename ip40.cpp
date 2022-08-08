//write a program to create 2 class rectangle 1 and rectangle 2 
//compare area  of booth using friend function 

#include<iostream>
using namespace std;

class rectangle2; //forward declaration
class rectangle1
{
	int l,b;
	public :
		void accept()
		{
			cout<<"Enter length for rectangle 1: ";
			cin>>l;
			cout<<"Enter breadth for rectangle 1 :";
			cin>>b;
		}
		
		friend void area(rectangle1,rectangle2);
};


class rectangle2
{
	int l,b;
	
	public:
	void accept()
		{
			cout<<"Enter length for rectangle 2 :";
			cin>>l;
			cout<<"Enter breadth for rectangle 2 :";
			cin>>b;
		}
		
		friend void area(rectangle1 r1, rectangle2 r2)
		{
			int area1 = r1.l * r1.b;
			int area2 = r1.l * r1.b;
			
			if(area1 > area2)
				cout<<"Area of rectanle 1 is greater than Area of rectanle 2  ";
			else
				cout<<"Area of rectanle 2 is greater than Area of rectanle 1  ";
		}
};


int main()
{
	rectangle1 obj1;
	rectangle2 obj2;
	
	obj1.accept(); 
	obj2.accept();
	
	area(obj1,obj2);
}
