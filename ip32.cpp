//passing objects as an arguments 

#include<iostream>
using namespace std;


class time
{
	public :
		
		int hrs,min,sec;
		void accept()
		{
			cout<<"Enter hour mins and seconds of the day hours:min:sec :";
			cin>>hrs>>min>>sec;
		}
		
		void display()
		{
			cout<<"\n";
			cout<<"hours :"<<hrs;
			cout<<"minutes :"<<min;
			cout<<"seconds :"<<sec;
		}
		
	void sum(time,time);	
};


void time ::  sum(time p,time q)
				{	
					sec = p.sec + q.sec;
					min= sec/60 +p.min + q.min;
					hrs = p.hrs + q.hrs + min/60;
					min = min % 60;
				}

int main()
{
	time t1,t2,t3;
	t1.accept();
	t1.display();
	t1.sum(t1,t2);
}




