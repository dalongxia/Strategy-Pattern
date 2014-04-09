#pragma once
#include "flybehavior.h"
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay(void);
	~FlyNoWay(void);
	virtual void fly(void);
};

