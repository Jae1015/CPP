#include<iostream>
using namespace std;

namespace a
{
	class J
	{
		int a,b;
		public:
		J(int x,int y)
		{
			a=x;b=y;
		}
		int max()
		{
			return a>b?a:b;
		}
	};
}
using namespace a;

int main()
{
	a::J obj(1,2);
	cout<<"Max value is :"<<obj.max();
	return 0;
}
