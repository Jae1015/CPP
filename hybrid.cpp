//default constructors if declared private,object cannot be created 
#include<iostream>
using namespace std;
class A
{
	int x=10;
	public:
	void getx(){
		cout<<x;	
	}
};
class B:public virtual A
{
	int y=11;
	public:
	void gety(){
		cout<<y;	
	}
};
class C:public virtual A
{
	int z=12;
	public:
	void getz(){
		cout<<z;	
	}
};
class D:public B,public C
{
	public:
	D(){
		cout<<"In class D:";	
	}
};
int main(){
	D obj;
	obj.getx();
}
