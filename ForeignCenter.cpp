#include "ForeignCenter.h"


ForeignCenter::ForeignCenter(string n):name(n)
{
}


ForeignCenter::~ForeignCenter(void)
{
}

void ForeignCenter::Attack()
{
	cout<<"�⼮�з� "<<name<<" ������"<<endl;
}

void ForeignCenter::Defence()
{
	cout<<"�⼮�з� "<<name<<" ���أ�"<<endl;
}