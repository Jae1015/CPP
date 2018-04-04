#include<iostream>
#include<list>
using namespace std;

int main()
{
	list <double> A;
	A.push_front(20.7);
	A.push_front(40.5);
	A.push_back(28.3);
	A.push_back(80.8);
	cout<<"front"<<A.front()<<endl;
	cout<<"back"<<A.back()<<endl;

	//using iterator on a list
	list<double>::iterator index;
	for(index=A.begin();index!=A.end();index++)
	{
		//cout<<"index"<<index;
		cout<<"value"<<*index<<endl;
	}
} 
