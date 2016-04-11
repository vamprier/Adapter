#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

using namespace std;

class Player
{
public:
	Player(string n);
	virtual ~Player(void);
public:
	virtual void Attack() = 0;
	virtual void Defence() = 0;
protected:
	string name;
};

#endif