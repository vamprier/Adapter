#ifndef FOREIGNCENTER_H
#define FOREIGNCENTER_H

#include "player.h"

class ForeignCenter
{
public:
	ForeignCenter(string n);
	~ForeignCenter(void);
public:
	void Attack();
	void Defence();
public:
	string name;
};

#endif