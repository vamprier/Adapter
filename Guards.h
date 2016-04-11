#ifndef GUARDS_H
#define GUARDS_H


#include "player.h"

class Guards : public Player
{
public:
	Guards(string n);
	~Guards(void);
public:
	virtual void Attack();
	virtual void Defence();
};

#endif