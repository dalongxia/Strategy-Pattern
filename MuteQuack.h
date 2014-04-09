#pragma once
#include "quackbehavior.h"
class MuteQuack :
	public QuackBehavior
{
public:
	MuteQuack(void);
	~MuteQuack(void);
	virtual void quack(void);
};

