#include"RPS.h"

money::money()
{
	commoney = 2000;
	peomoney = 2000;

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
	commoney - bet;
	peomoney + bet;
}

void money::lose(int bet)
{
	commoney + bet;
	peomoney - bet;
}

