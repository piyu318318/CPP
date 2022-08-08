#include<iostream>
using namespace std;

class myclass
{
	public :
	void mymethod()
	{
		cout<<"in my method :";
	}
	
};


int main()
{
	myclass obj;
	obj.mymethod();
	return 0;
}
