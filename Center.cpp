#include "Center.h"


Center::Center(string n):Player(n)
{
}


Center::~Center(void)
{
}

void Center::Attack()
{
	cout<<"�з� "<<name<<" ������"<<endl;
}

void Center::Defence()
{
	cout<<"�з� "<<name<<" ���أ�"<<endl;
}