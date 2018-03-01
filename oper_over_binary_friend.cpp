#include<iostream>
using namespace std;

class complex
{
	int r,i;
	public:
	complex(){}
	complex(int x,int y){r=x,i=y;}
	void show();
	friend complex operator +(complex c1,complex c2);
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
	
complex operator +(complex c1,complex c2)
{
	return complex(c1.r+c2.r,c1.i+c2.i);
}
