# Codsoft-TASK
SIMPLE CALCULATOR
#include<iostream>
using namespace std;
class calculator
{
	private:
		int a,b,operation,n;
		
	public:
		void choice();
		
		void add()
		{
			cout<<"\n Enter two numbers:";
			cin>>a>>b;
			cout<<"\n Addition is:"<<a+b;
		}
		void sub()
		{
			cout<<"\n Enter two numbers:";
			cin>>a>>b;
			cout<<"\n Subtraction is:"<<a-b;
		}
		void mul()
		{
			cout<<"\n Enter two numbers:";
			cin>>a>>b;
			cout<<"\n Multiplication is:"<<a*b;
		}
		void div()
		{
			cout<<"\n Enter two numbers:";
			cin>>a>>b;
			cout<<"\n Division is:"<<a/b;
		}
}c;
void calculator::choice()
{
	cout<<"\n Enter number of operation of your choice from following:";
	cout<<"\n\t1.ADDITION \n\t2.SUBTRACTION \n\t3.MULTIPLICATION \n\t4.DIVISION ==>";
	cin>>operation;
	switch(operation)
	{
		case 1: add();
			break;
		case 2: sub();
			break;
		case 3: mul();
			break;
		case 4: div();
		 	break;
		default :
			cout<<"\n Sorry,operation is not valid.";
	}
	
}
int main()
{
	calculator c[5];
    for(int i=0;i<5;i++)
    {
    	c[i].choice();
	}
	return 0;
}
