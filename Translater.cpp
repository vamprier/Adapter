#include "Translater.h"


Translater::Translater(string n):Player(n)
{
	fc = new ForeignCenter(n);
}


Translater::~Translater(void)
{
}

void Translater::Attack()
{
	fc->Attack();
}

void Translater::Defence()
{
	fc->Defence();
}