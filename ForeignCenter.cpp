#include "ForeignCenter.h"


ForeignCenter::ForeignCenter(string n):name(n)
{
}


ForeignCenter::~ForeignCenter(void)
{
}

void ForeignCenter::Attack()
{
	cout<<"外籍中锋 "<<name<<" 进攻！"<<endl;
}

void ForeignCenter::Defence()
{
	cout<<"外籍中锋 "<<name<<" 防守！"<<endl;
}