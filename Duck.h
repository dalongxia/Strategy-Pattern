#pragma once
#include "FlyBehavior.h"
#include "FlyBehavior.h"
#include "FlyNoWay.h"
#include "FlyWithWings.h"
#include "QuackBehavior.h"
#include "MuteQuack.h"
#include "Quack.h"
#include "Squeak.h"

class Duck
{
public:
	FlyBehavior* p_flyBehavior;
	QuackBehavior* p_quackBehavior;

	Duck(void);
	Duck(FlyBehavior& flyBehavior, QuackBehavior& quackBehavior);
	virtual ~Duck(void);

	void swim(void);
	virtual void display(void);
	void performQuack(void);
	void performFly(void);
	void setFlyBehavior(const FlyBehavior& flyBehavior);
	void setQuackBehavior(const QuackBehavior& quackBehavior);
};

