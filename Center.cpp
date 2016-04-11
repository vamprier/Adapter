#include "Center.h"


Center::Center(string n):Player(n)
{
}


Center::~Center(void)
{
}

void Center::Attack()
{
	cout<<"ÖĞ·æ "<<name<<" ½ø¹¥£¡"<<endl;
}

void Center::Defence()
{
	cout<<"ÖĞ·æ "<<name<<" ·ÀÊØ£¡"<<endl;
}