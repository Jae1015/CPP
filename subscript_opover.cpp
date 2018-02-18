#include<iostream>

class IntList
{
	int m_list[10];
	public:
	int& operator[](int index)
	{	
		m_list[index];	
	}
};

int main()
{
	IntList list;
	list[2]=10;
	printf("value at 2 :%d\n",list[2]);
	return 0;
}
