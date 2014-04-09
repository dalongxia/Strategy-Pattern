#pragma once
#include <iostream>
using std::cout;
using std::endl;

class QuackBehavior
{
public:
	QuackBehavior(){}
	virtual ~QuackBehavior(){}
	virtual void quack(void){}
};