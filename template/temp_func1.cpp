#include<iostream>
using namespace std;

template <class T> T add(T a,T b)
{
	return a+b;
}

template <class T> T sub(T a,T b)
{
	return a-b;
}

int main()
{
	int x =add<int>(1,2);
	cout<<x;
	int y =sub<int>(4,3);
	cout<<y;	
	return 0;
}
