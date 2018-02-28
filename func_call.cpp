#include<iostream>

using namespace std;
void call_val(int c, int d);
void call_ref(int& c, int& d);
void call_ptr(int* c, int* d);
int main()
{		
	int i,a,b;
	cout<<"Enter operand 1:"<<endl;
	cin>>a;
	cout<<"Enter operand 2:"<<endl;		
	cin>>b;
	cout<<"1.Swap using Call by value "<<endl<<"2. Swap using Call by reference "<<endl<<"3. Swap using Call by pointer "<<endl;
	cout<<"ENter your choice:"<<endl;
	cin>>i;
	switch(i)
	{

		case 1:call_val(a,b);
			cout<<"IN MAIN:"<<endl;
			cout<<"a:"<<a<<" b:"<<b<<endl;
			break;

		case 2:call_ref(a,b);
			cout<<"IN MAIN:"<<endl;
			cout<<"a:"<<a<<" b:"<<b<<endl;
			break;

		case 3:call_ptr(&a,&b);
			cout<<"IN MAIN:"<<endl;
			cout<<"a:"<<a<<" b:"<<b<<endl;
			break;

		case 4:exit(0);

		default: cout<<"ENter 1,2 or 3";
		}
}

void call_val(int c, int d)
{
	int temp=c;
	c=d;
	d=temp;
	cout<<"IN FUNCTION:"<<endl;
	cout<<"a:"<<c<<" b:"<<d<<endl;
}
void call_ref(int& c, int& d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
	
	cout<<"IN FUNCTION:"<<endl;
	cout<<"a:"<<c<<" b:"<<d<<endl;
}
void call_ptr(int* c, int* d)
{
	int temp=*c;
	*c=*d;
	*d=temp;
	cout<<"IN FUNCTION:"<<endl;
	cout<<"a:"<<*c<<" b:"<<*d<<endl;
}
