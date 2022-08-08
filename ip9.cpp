#include<iostream>
using namespace std;

class myclass
{
	public :
		void mymethod();
};

void myclass :: mymethod()
{
	cout<<"in the mymethod";
}

int main()
{
	myclass obj;
	obj.mymethod();
}
