#include<iostream>
using namespace std;
void test(int i)
{
	
	
		cout<<"Inside test";
		if(i)
			throw i;	
	cout<<"end";
}
int main()
{
	cout<<"start";
	try
	{
	test(0);
	test(1);
	test(2);//won't be excuted		
	}
	
	catch(int i)
	{
		cout<<"caughtme on no."<<i;
	}
	cout<<"end";
	return 0;
}
