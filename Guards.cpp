#include "Guards.h"


Guards::Guards(string n):Player(n)
{
}


Guards::~Guards(void)
{
}

void Guards::Attack()
{
	cout<<"���� "<<name<<" ������"<<endl;
}

void Guards::Defence()
{
	cout<<"���� "<<name<<" ���أ�"<<endl;
}