#include<iostream>
using namespace std;

class A
{
	public :
		int speed(int maxspeed);
		//also you can declare as 
		//int speed(int );
		
};

int A ::speed(int maxspeed)
{
	return maxspeed;
}

int main()
{
	A obj;	
	cout<<"maximum speed is :"<<obj.speed(100);
	
}
