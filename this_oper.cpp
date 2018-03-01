#include<iostream>
using namespace std;

class Numbers
{
	int a;
	public:
	void set_data(int x)
	{
		a=x;
	}
	void add(Numbers &n)
	{
		int sum = n.a += this->a;//precedence and associativity
		cout<<endl<<"SUM"<<sum;
		cout<<endl<<"n.a"<<n.a;
	}
};

int main()
{
	Numbers n1,n2;
	n1.set_data(10);
	n2.set_data(20);
	n1.add(n2);
	return 0;
}
