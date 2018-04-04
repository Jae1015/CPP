//nested namespace
#include<iostream>
using namespace std;

namespace a
{
	int x=5;
	void show()
	{
		cout<<"In namespace b"<<endl;
		cout<<x<<endl;	
	}
	namespace b
	{
		int x=10;
		void show()
		{
			cout<<"In namespace b"<<endl;
			cout<<x<<endl;	
		}
	}
}
int main()
{
	//using namespace a;
	a::show();
	using namespace a::b;
	show();
}
