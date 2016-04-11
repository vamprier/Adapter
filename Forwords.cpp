#include "Forwords.h"


Forwords::Forwords(string n):Player(n)
{
}


Forwords::~Forwords(void)
{
}

void Forwords::Attack()
{
	cout<<"Ç°·æ "<<name<<" ½ø¹¥£¡"<<endl;
}

void Forwords::Defence()
{
	cout<<"Ç°·æ "<<name<<" ·ÀÊØ£¡"<<endl;
}