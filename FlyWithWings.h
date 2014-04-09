#pragma once
#include "flybehavior.h"

class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings(void);
	~FlyWithWings(void);
	virtual void fly(void);
};

