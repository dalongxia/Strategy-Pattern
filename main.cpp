#include <iostream>
#include "Duck.h"
#include "FlyBehavior.h"
#include "FlyNoWay.h"
#include "FlyWithWings.h"
#include "MallardDuck.h"
#include "MuteQuack.h"
#include "Quack.h"
#include "QuackBehavior.h"
#include "RedheadDuck.h"
#include "Squeak.h"

using std::cout;
using std::endl;

int main(int argc, char*argv[])
{
	Duck* p_mallard = new MallardDuck();
	p_mallard->display();
	p_mallard->performFly();
	p_mallard->performQuack();
	p_mallard->setFlyBehavior(FlyNoWay());
	p_mallard->performFly();
	p_mallard->setFlyBehavior(FlyWithWings());
	p_mallard->performFly();

	p_mallard = new RedheadDuck();
	p_mallard->display();
	p_mallard->performFly();
	p_mallard->performQuack();
	p_mallard->setQuackBehavior(Squeak());
	p_mallard->performQuack();
	p_mallard->setQuackBehavior(MuteQuack());
	p_mallard->performQuack();

	getchar();
	return 0;
}