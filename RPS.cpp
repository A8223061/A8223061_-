#include"RPS.h"

Money::Money()
{
}

Money::Money(int peomoney, int commoney,int bet)
{
	this->peomoney = peomoney;
	this->commoney = commoney;
	this->bet = bet;
}



void Money::setcommoney(int com)
{
	commoney = com;
}

void Money::setpeomoney(int peo)
{
	peomoney = peo;
}

int Money::getcommoney()
{
	return commoney;
}

int Money::getpeomoney()
{
	return peomoney;
}

int Money::getBet()
{
	return bet;
}

int Money::peowin()
{
	return peomoney += bet;
}

int Money::peolose()
{
	return peomoney -= bet;
}

int Money::peodraw()
{
	return peomoney;
}

int Money::comwin()
{
	return commoney += bet;
}

int Money::comlose()
{
	return commoney -= bet;
}

int Money::comdraw()
{
	return commoney;
}


