#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		fact*=i;
	}
cout<<"factorial:"<<fact<<endl;
return 0;
}
