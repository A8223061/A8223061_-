#ifndef RSP_H
#define RSP_H
#include<iostream>
using namespace std;

class Money {
private:
	int commoney;
	int peomoney;
	int bet;
public:
	Money();
	Money(int, int, int);
	void setcommoney(int);
	void setpeomoney(int);

	int getcommoney();
	int getpeomoney();
	int getBet();

	int peowin();
	int peolose();
	int peodraw();

	int comwin();
	int comlose();
	int comdraw();
};
#endif 