//Single inheritance
#include<iostream>
using namespace std;
class A{
	public:
	A(){
		cout<<"A's constructor called"<<endl;
	}
};
class B:public A{
	public:
	B(){
		cout<<"B's constructor called"<<endl;
	}
};
int main(){
	A obj1;
	B obj2;
	cout<<"end"<<endl;
	return 0;
}
