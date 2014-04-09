#include "Duck.h"


Duck::Duck(void)
{
	p_flyBehavior = new FlyBehavior();
	p_quackBehavior = new QuackBehavior();
}


Duck::~Duck(void)
{
	delete p_flyBehavior;
	delete p_quackBehavior;
}

void Duck::swim(void)
{
	cout << "I'm swimming~" << endl;
}

void Duck::display(void)
{
	cout << "I'm a duck." << endl;
}

void Duck::performQuack(void)
{
	p_quackBehavior->quack();
}

void Duck::performFly(void)
{
	p_flyBehavior->fly();
}

void Duck::setFlyBehavior(const FlyBehavior& flyBehavior)
{
	if(typeid(flyBehavior) == typeid(FlyWithWings))
		p_flyBehavior = new FlyWithWings();
	else
		p_flyBehavior = new FlyNoWay();
}

void Duck::setQuackBehavior(const QuackBehavior& quackBehavior)
{
	if(typeid(quackBehavior) == typeid(Quack))
		p_quackBehavior = new Quack();
	else if(typeid(quackBehavior) == typeid(Squeak))
		p_quackBehavior = new Squeak();
	else
		p_quackBehavior = new MuteQuack();
}
