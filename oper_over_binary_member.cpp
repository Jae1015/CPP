#include<iostream>
using namespace std;

class complex
{
	int r,i;
	public:
	complex(){}
	complex(int x,int y){r=x,i=y;}
	void show();
	complex operator +(complex c2);
};
int main()
{
	complex S1(11,12);
	complex S2(11,12);
	complex S3=S1+S2;
	S1.show();
	S2.show();
	S3.show();
	return 0;
}


void complex :: show()
{
	cout<<r<<"+"<<i<<"i"<<endl; 
}
	
complex complex :: operator +(complex c2)
{
	return complex(r+c2.r,i+c2.i);
}
