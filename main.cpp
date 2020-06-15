#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include"RPS.h"

int main() {
	int a, c = 0, e, f, g = 0, h;
	string b, d;
	srand(time(NULL));
start:
		money Money(2000, 2000);
		cout << "你的賭金還有:" << Money.getpeomoney() << endl;
		cout << "對方的賭金還有:" << Money.getcommoney() << endl;
		
		while (Money.getcommoney() > 0 and Money.getpeomoney() > 0) {
			cout << "請下注金額:" << endl;
			cin >> g;
			if (g >= 0 && g <= Money.getpeomoney()) {
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
						Money.lose(g);
						cout << "你的賭金還有:" << Money.getpeomoney() << endl;
						cout << "對方的賭金還有:" << Money.getcommoney() << endl;
					}
					else if (e > f) {
						cout << "你贏了!!" << endl;
						Money.win(g);
						cout << "你的賭金還有:" << Money.getpeomoney() << endl;
						cout << "對方的賭金還有:" << Money.getcommoney() << endl;
					}
					else if (e == f) {
						cout << "平手~再來一次吧!" << endl;
						cout << "你的賭金還有:" << Money.getpeomoney() << endl;
						cout << "對方的賭金還有:" << Money.getcommoney() << endl;
					}
					else if (e - f == -2) {
						cout << "你贏了!!" << endl;
						Money.win(g);
						cout << "你的賭金還有:" << Money.getpeomoney() << endl;
						cout << "對方的賭金還有:" << Money.getcommoney() << endl;
					}
					else if (e < f) {
						cout << "你輸了!!再接再厲:)" << endl;
						Money.lose(g);
						cout << "你的賭金還有:" << Money.getpeomoney() << endl;
						cout << "對方的賭金還有:" << Money.getcommoney() << endl;
					}
				}
				else if (c == -1) {
					goto end;
				}
				else
					cout << "請輸入1~3的數字" << endl;
			}
			else {
				cout << "你輸入的賭注不再你的金額內，請重新輸入" << endl;
			}
		}

		if (Money.getpeomoney() > 0)
		{
			cout << "恭喜你贏了這局" << endl;
		}
		
		else
		{
			cout << endl << "你輸了這局，下次加油" << endl;
		}
		
		cout << "(1)再來一局 (-1)離開" << endl << "是否再來一局:" << endl;
		cin >> h;
		if (h == 1)
			goto start;
		else if (h == -1)
			goto end;
		else
			cout << "請輸入1或-1";
	
end:
	system("pause");
	return 0;
}