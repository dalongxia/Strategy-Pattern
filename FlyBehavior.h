#pragma once
#include <iostream>
using std::cout;
using std::endl;

class FlyBehavior
{
public:
	FlyBehavior(void){}
	virtual ~FlyBehavior(void){}
	virtual void fly(void){}
};