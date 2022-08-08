//forward declaration in friennd function 
//two or more class can share private data between them.to sharing private data we need forward declaration.
//in c++ forward declaration is used for classes in this class is predefined 

#include<iostream>
using namespace std;

class second;//forward declaration

class first
{
	int x;//default private
	
	public: 
	void accept()
	{
		cout<<"Enter value for x : ";
		cin>>x;
	}
	
	friend void mul(first ,second );
	
};

class second
{
	int y;
	public :
	
	void accept()
	{
		cout<<"Enter value for y : ";
		cin>>y;
	}
	
	friend void mul(first f1,second s1)
	{	
		cout<<"multiplication of x and y is :"<<f1.x*s1.y;
	}
};



int main()
{
	first f;
	second s;
		
	f.accept();
	s.accept();
	
	mul(f,s);		
	return 0;
}
