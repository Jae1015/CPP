#include<iostream>

using namespace std;
int main()
{
	int a,b,i=0;
	char ch;
	do
	{
		cout<<"Enter operand 1:"<<endl;
		cin>>a;
		cout<<"Enter operand 2:"<<endl;
		cin>>b;
		cout<<"Enter operator(+,-,*,/):";
		cin>>ch;
		if(ch=='+')
		{
			cout<<"sum is"<<a+b<<endl;	
		}
		
		else if(ch=='-')
		{
			cout<<"diff is"<<a-b<<endl;	
		}

		else if(ch=='*')
		{
			cout<<"product is"<<a*b<<endl;	
		}

		else
		{
			cout<<"Quotient is"<<a/b<<endl;
			cout<<"Remainder is"<<a%b<<endl;	
		}
		cout<<"Do you want to continue? ENter 0 or 1:"<<endl;
		cin>>i;
	}while(i);
	return 0;
}

