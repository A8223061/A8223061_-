#include"RPS.h"

money::money()
{

}

money::money(int com, int peo)
{
	commoney = com;
	peomoney = peo;
}

void money::setcommoney(int com)
{
	commoney = com;
}

void money::setpeomoney(int peo)
{
	peomoney = peo;
}

int money::getcommoney()
{
	return commoney;
}

int money::getpeomoney()
{
	return peomoney;
}

void money::win(int bet)
{
	setcommoney(commoney - bet);
	setpeomoney(peomoney + bet);
}

void money::lose(int bet)
{
	setcommoney(commoney + bet);
	setpeomoney(peomoney - bet);
}