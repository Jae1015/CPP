#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;

	public:
	void setdata();
	void display();
};

void person :: setdata()
{
	cout<<"ENter name:\n";
	cin>>name;
	cout<<"Enter age:\n";
	cin>>age;
}

void person::display()
{
	cout<<"\nname:"<<name;
	cout<<"\nage:"<<age;
}

int main()
{
	person p1,p2;
	p1.setdata();
	p2.setdata();
	p1.display();
	p2.display();
	return 0;
}
