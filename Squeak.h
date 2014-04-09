#pragma once
#include "quackbehavior.h"
class Squeak :
	public QuackBehavior
{
public:
	Squeak(void);
	~Squeak(void);
	virtual void quack(void);
};

