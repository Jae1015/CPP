//Perfect.cpp

#include<iostream>

using namespace std;
int main()
{
	int n=0,sum=1;
	for(int i=2;i<=10000;i++)
	{
		n=i,sum=1;
		for(int j=2;j<=(i/2);j++)
		{
			if(i%j==0)
				sum+=j;	
		}
		if(sum==i)
			cout<<i<<endl;
	}
	return 0;
}

