#pragma once
#include "quackbehavior.h"
class Quack :
	public QuackBehavior
{
public:
	Quack(void);
	~Quack(void);
	virtual void quack(void);
};

