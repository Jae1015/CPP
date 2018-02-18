#include<iostream>

class complex
{	
	public:
	int real,imag;
	void operator++()
	{
		printf("%d+i%d",++real,++imag);
	}
	void operator--()
	{
		printf("\n%d+i%d",--real,--imag);
	}	
	
};

//void complex::operator++(complex obj)

int main()
{
	complex c1;
	printf("Enter real and imaginary parts:\n");
	scanf("%d%d",&c1.real,&c1.imag);
	++c1;
	--c1;	
	return 0;
}
