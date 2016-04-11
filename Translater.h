#ifndef TRANSLATER_H
#define TRANSLATER_H


#include "ForeignCenter.h"

class Translater : public Player
{
public:
	Translater(string n);
	~Translater(void);
public:
	virtual void Attack();
	virtual void Defence();
private:
	ForeignCenter* fc;
};

#endif

