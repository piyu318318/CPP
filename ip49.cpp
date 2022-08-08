//constructors with default arguments 
//we can provide default values to para to constructors in cpp
//if user doesnt provide value in function call the default value will be used.
//default value can be assign to argumrnnt in parameter consttructor.uf user supply value durnig 
//object creation those value will be assign to objects.

#include<iostream>
using namespace std;

class Demo
{
	public :
		
		Demo(){}
		
		Demo(int a,int b=10,int c=20)//here we assign b=10 as a default argument.
		{
			cout<<"addistion is : "<<a+b+c<<endl;
			
		}
	
};


int main()
{
	Demo obj;
	
	Demo(50,100,150);//50+100+150 =300	
	Demo(30,20);//30+20+70
}

