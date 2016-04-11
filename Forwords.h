#ifndef FORWORDS_H
#define FORWORDS_H


#include "player.h"

class Forwords : public Player
{
public:
	Forwords(string n);
	~Forwords(void);
public:
	virtual void Attack();
	virtual void Defence();
};

#endif