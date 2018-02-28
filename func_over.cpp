#include<iostream>

using namespace std;
void square();
void rectangle();
int main()
{		
	int i;
	cout<<"1.Square "<<endl<<"2. Rectangle"<<endl<<"3.EXIT"<<endl;
	cout<<"ENter your choice:"<<endl;
	cin>>i;
	switch(i)
	{

		case 1:square();
			break;

		case 2:rectangle();
			break;

		case 3:exit(0);

		default: cout<<"ENter 1,2 or 3";
	}
}

void square()
{
	int a;
	cout<<"Enter length of a side:"<<endl;
	cin>>a;
	cout<<"IN FUNCTION:"<<endl;
	cout<<"area: "<<a*a<<endl<<"peri: "<<4*a<<endl;
}
void rectangle()
{
	int l,b;
	cout<<"length:"<<endl;
	cin>>l;
	cout<<"Enter breadth"<<endl;		
	cin>>b;
	cout<<"area:"<<l*b<<" perimeter:"<<2*(l+b)<<endl;
}

