#include "Guards.h"


Guards::Guards(string n):Player(n)
{
}


Guards::~Guards(void)
{
}

void Guards::Attack()
{
	cout<<"ºóÎÀ "<<name<<" ½ø¹¥£¡"<<endl;
}

void Guards::Defence()
{
	cout<<"ºóÎÀ "<<name<<" ·ÀÊØ£¡"<<endl;
}