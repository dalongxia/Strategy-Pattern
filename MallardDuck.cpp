#include "MallardDuck.h"


MallardDuck::MallardDuck(void)
{
	p_flyBehavior = new FlyWithWings();
	p_quackBehavior = new Quack();
}


MallardDuck::~MallardDuck(void)
{
}

void MallardDuck::display(void)
{
	cout << "I'm a MallardDuck." << endl;
}