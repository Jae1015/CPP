#include<iostream>
using namespace std;

int main()
{	
	const int m=1;
	//pointer to a constant
	int const* ptr2 = &m;
	//m++;
	char a[]="GOOD";
	char b[]="MORNING";
	char* const ptr1=a;
	//ptr1=b;
	char const* const ptr = a;
	return 0;	
}
