#pragma once
#include "duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class RedheadDuck :
	public Duck
{
public:
	RedheadDuck(void);
	~RedheadDuck(void);
	virtual void display(void);
};

