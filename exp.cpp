#include<iostream>
using namespace std;
enum colour{red,blue,green};

int main()
{
	colour bg=(colour)7;//no need write enum keyword, doesnot permi int value automatically to enum 
	int c=red;	//colour promoted to int
	void *gp;
	int *ip;
	gp=ip; //assign int to void
	ip=(int *)gp; //vice versa using type cast		
	int i=1;
	switch(i)
	{
		case red:
		cout<<"red";
		i=0;
		break;

		case blue:
		cout<<"blue";
		i=0;
		break;

	}
}
