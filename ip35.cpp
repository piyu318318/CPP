//static method

#include<iostream>
using namespace std;
class Demo
{
	
		int x,y;
		static int z;
		public :
		void getdata(int a,int b)
		{
			x=a;
			y=b;
			z++;
		}
		
		void show()
		{
			cout<<"\n value of x is "<<x<<" value of y is "<<y;
		}
		
		static void display()
		{
			cout<<"\nIn static method z: "<<z;
		}
	
		
};



int Demo :: z=0;


int main()
{
	Demo d1,d2,d3;
	
	
	d1.getdata(2,4);
	d1.show();
	Demo :: display();
	
	d2.getdata(5,7);
	d2.show();
	Demo :: display();
	
	
	d3.getdata(6,4);
	d3.show();
	Demo :: display();
	
	return 0;
}
