#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *p;
	int *q;
	p=&a;
	q=&*p;
	cout<<"value of p is "<<*p;
	cout<<"\nvalue of q is "<<*q;
	
	int x=10>>2;
	int y=10<<2;
	cout<<"\n after shifting 10>>2 : "<<x;
	cout<<"\n after shifting 10<<2 : "<<y;
	
}
