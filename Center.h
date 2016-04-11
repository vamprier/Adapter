#ifndef CENTER_H
#define CENTER_H


#include "player.h"

class Center : public Player
{
public:
	Center(string n);
	~Center(void);
public:
	virtual void Attack();
	virtual void Defence();
};

#endif