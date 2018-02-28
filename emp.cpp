#include<iostream>
using namespace std;
class emp
{
	int id;
	char name[15];
	float sal;
	
	public:
	void getinfo();	
	void putinfo();
};

void emp:: getinfo()
{
	cout<<"Enter emp id:"<<endl;
	cin>>id;
	cout<<"Enter emp name:"<<endl;
	cin>>name;
	cout<<"Enter emp sal:"<<endl;
	cin>>sal;			
}
void emp:: putinfo()
{
	cout<<"Employee Details:";
	cout<<"id"<<id<<endl<<"name"<<name<<endl<<"sal"<<sal<<endl;
}
int main()
{
	int n;
	cout<<"Enter count of employees";
	cin>>n;
	emp emp_a[n];
	cout<<"Enter info of employees:";
	for(int i=0;i<n;i++)
	{
		emp_a[i].getinfo();
	}
	for(int i=0;i<n;i++)
	{
		emp_a[i].putinfo();
	}
	return 0;
}

