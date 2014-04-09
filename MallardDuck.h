#pragma once
#include "duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck :
	public Duck
{
public:
	MallardDuck(void);
	~MallardDuck(void);
	virtual void display(void);
};

