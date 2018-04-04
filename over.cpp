#include<iostream>
using namespace std;
namespace a
{
	float f(float a)
	{
		//cout<<"hello";
		return a;
	}
	char f(char a,int b)
	{
		//cout<<"hello";
		return a;
	}
}

int main()
{
	cout<<a::f(10);
	cout<<a::f('a',10);
}
//it can distinguish using number of parameteres and not byret type or type of parameters
//a::f('a' doesn't work 
