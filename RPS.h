#ifndef RSP_H
#define RSP_H
#include<iostream>
using namespace std;

class money {
private:
	int commoney;
	int peomoney;

public:
	money();
	money(int, int);

	void setcommoney(int);
	void setpeomoney(int);

	int getcommoney();
	int getpeomoney();

	void win(int);
	void lose(int);
};
#endif 
