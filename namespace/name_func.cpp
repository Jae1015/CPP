//use of functions within a user defined namespace
#include<iostream>
using namespace std;
namespace a
{
	void func()
	{
		cout<<"Namespace practical";
	}
}
using namespace a;
int main()
{
	func();
	return 0;
}
//it can be done without line 11, just definition of namespace and a::func()
