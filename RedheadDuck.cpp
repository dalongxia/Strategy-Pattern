#include "RedheadDuck.h"


RedheadDuck::RedheadDuck(void)
{
	p_flyBehavior = new FlyWithWings();
	p_quackBehavior = new Quack();
}


RedheadDuck::~RedheadDuck(void)
{
}

void RedheadDuck::display(void)
{
	cout << "I'm a redheadDuck." << endl;
}
