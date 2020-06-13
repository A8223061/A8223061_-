#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cstdlib>
#include"RPS.h"
using namespace std;
int main() {
	int a, c = 0, e, f,g=0;
	string b, d;
	srand(time(NULL));
	while (c != -1) {
		cout << "請下注金額:" << endl;
		cin >> g;
		if (g >= 0 && g <= 2000) {
			Money bet(2000, 2000, g);
			cout << "請輸入數字:(1)剪刀,(2)石頭,(3)布,(-1)離開" << endl;
			cin >> c;
			if (c == 1 || c == 2 || c == 3) {
				if (c == 1) {
					b = "剪刀";
					e = 1;
				}
				else if (c == 2) {
					b = "石頭";
					e = 2;
				}
				else {
					b = "布";
					e = 3;
				}
				a = rand() % 3 + 1;
				if (a == 1) {
					d = "剪刀";
					f = 1;
				}
				else if (a == 2) {
					d = "石頭";
					f = 2;
				}
				else {
					d = "布";
					f = 3;
				}
				cout << "你出了:" << b << endl;
				cout << "電腦出了:" << d << endl;

				if (e - f == 2) {
					cout << "你輸了!!再接再厲:)" << endl;
					cout << "你的賭金還有:" << bet.peolose() << endl;
					cout << "對方的賭金還有:" << bet.comwin() << endl;
				}
				else if (e > f) {
					cout << "你贏了!!" << endl;
					cout << "你的賭金還有:" << bet.peowin() << endl;
					cout << "對方的賭金還有:" << bet.peowin() << endl;
				}
				else if (e == f) {
					cout << "平手~再來一次吧!" << endl;
					cout << "你的賭金還有:" << bet.peodraw() << endl;
					cout << "對方的賭金還有:" << bet.comdraw() << endl;
				}
				else if (e - f == -2) {
					cout << "你贏了!!" << endl;
					cout << "你的賭金還有:" << bet.peowin() << endl;
					cout << "對方的賭金還有:" << bet.comlose() << endl;
				}
				else if (e < f) {
					cout << "你輸了!!再接再厲:)" << endl;
					cout << "你的賭金還有:" << bet.peolose() << endl;
					cout << "對方的賭金還有:" << bet.comwin() << endl;
				}
			}
			else if (c == -1) {
				goto end;
			}
			else
				cout << "請輸入1~3的數字" << endl;
		}
		else
			goto end;
	}
	end:
	system("pause");
	return 0;
}