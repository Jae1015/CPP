#include<iostream>
using namespace std;

template <class T1,class T2> T1 add(T1 a,T2 b)
{
	//cout<<a<<endl;
	cout<<a+b<<endl;
}

/*template <class T1,T2> T sub(T a,T b)
{
	return a-b;
}*/

int main()
{
	add<char,int>('a',2);
	add<float,int>(10.0,2.0); 
	//cout<<x<<endl;
//	int y =sub<int>(4,3);
//	cout<<y;	
	return 0;
}
