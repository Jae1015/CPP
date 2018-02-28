#include<iostream>
using namespace std;

class complex
{
	float m,n;
	public:
	complex(){};
	//complex(){m=n=0;}; will make the call ambiguous
	complex(float x){m=n=x;};
	complex(float x,float y){m=x,n=y;};

	friend complex sum(complex,complex);
	friend void show(complex);
};


int main()
{
	complex A(1.2,2.3);
	complex B(3.4);
	complex C;
	C=sum(A,B);
	show(A);
	show(B);
	show(C);
	complex P;//second method
	P=complex(1,2);
	show(P);
	return 0;
}

complex sum(complex c1,complex c2)
{
	complex c3;
	c3.m=c1.m+c2.m;	
	c3.n=c1.n+c2.n;
	return c3;
}

void show(complex c1)
{
	cout<<c1.m<<"+"<<c1.n<<"i"<<endl;
}
