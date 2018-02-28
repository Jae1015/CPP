#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of terms:";
	cin>>n;
	int a=0,b=1,c;
	cout<<a<<endl<<b<<endl;
	for(int i=1;i<=(n-2);i++)
	{
		int c=b+a;
		a=b;
		b=c;
		cout<<c<<endl;		
	}	
	return 0;
}

