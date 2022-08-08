#include<iostream>
using namespace std;
static int count= 0;
class A
{
	
	public :
	
	void display()
	{
		count++;
		cout<<"value of count is :"<<count<<endl;;
		
	}
};


int main()
{
	A obj,obj1,obj2,obj3;
	obj.display();
	obj1.display();
	obj2.display();
	obj3.display();
	
	return 0;
}
