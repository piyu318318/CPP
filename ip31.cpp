/*
inline function
If a function is inline, the compiler places a copy of the code of that function at each point where the function
is called at compile time.
it works linke macros in c language.
Inline function requires small amount of memory.
Inline function takes less time for compilation and execution compared to normal function.
We cannot use switch and goto statememnts in the inline function.
Inline function doesnt work if we have used static variable.
Recursive function not allowed in inline function.
*/

#include<iostream>
using namespace std;

inline void max(int x,int y)
{
	if(x>y)
		cout<<x<<" is large than "<<y<<endl;
	else if(x<y)
		cout<<y<<" is large than "<<x<<endl;
	else
		cout<<x<<" and "<<y<<" are equal."<<endl;
}


int main()
{
	int x,y;
	cout<<"Enter value of x";
	cin>>x;
	cout<<"Enter value of y";
	cin>>y;
	
	max(x,y);
	
}
