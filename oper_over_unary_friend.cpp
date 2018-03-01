#include<iostream>
using namespace std;

class space
{
	int x,y,z;
	public:
	void getdata(int a,int b,int c);
	void show();
	friend void operator-(space &);
};
int main()
{
	space S;
	S.getdata(10,11,12);
	S.show();
	-S;
	S.show();
	return 0;
}

void space :: getdata(int a,int b,int c)
{
	x=a,y=b,z=c;
}

void space :: show()
{
	cout<<"S: ";
	cout<<x<<" "<<y<<" "<<z<<endl; 
}
	
void operator-(space &s)
{
	s.x=-s.x,s.y=-s.y,s.z=-s.z;
}
