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
		cout << "�ФU�`���B:" << endl;
		cin >> g;
		if (g >= 0 && g <= 2000) {
			Money bet(2000, 2000, g);
			cout << "�п�J�Ʀr:(1)�ŤM,(2)���Y,(3)��,(-1)���}" << endl;
			cin >> c;
			if (c == 1 || c == 2 || c == 3) {
				if (c == 1) {
					b = "�ŤM";
					e = 1;
				}
				else if (c == 2) {
					b = "���Y";
					e = 2;
				}
				else {
					b = "��";
					e = 3;
				}
				a = rand() % 3 + 1;
				if (a == 1) {
					d = "�ŤM";
					f = 1;
				}
				else if (a == 2) {
					d = "���Y";
					f = 2;
				}
				else {
					d = "��";
					f = 3;
				}
				cout << "�A�X�F:" << b << endl;
				cout << "�q���X�F:" << d << endl;

				if (e - f == 2) {
					cout << "�A��F!!�A���A�F:)" << endl;
					cout << "�A������٦�:" << bet.peolose() << endl;
					cout << "��誺����٦�:" << bet.comwin() << endl;
				}
				else if (e > f) {
					cout << "�AĹ�F!!" << endl;
					cout << "�A������٦�:" << bet.peowin() << endl;
					cout << "��誺����٦�:" << bet.peowin() << endl;
				}
				else if (e == f) {
					cout << "����~�A�Ӥ@���a!" << endl;
					cout << "�A������٦�:" << bet.peodraw() << endl;
					cout << "��誺����٦�:" << bet.comdraw() << endl;
				}
				else if (e - f == -2) {
					cout << "�AĹ�F!!" << endl;
					cout << "�A������٦�:" << bet.peowin() << endl;
					cout << "��誺����٦�:" << bet.comlose() << endl;
				}
				else if (e < f) {
					cout << "�A��F!!�A���A�F:)" << endl;
					cout << "�A������٦�:" << bet.peolose() << endl;
					cout << "��誺����٦�:" << bet.comwin() << endl;
				}
			}
			else if (c == -1) {
				goto end;
			}
			else
				cout << "�п�J1~3���Ʀr" << endl;
		}
		else
			goto end;
	}
	end:
	system("pause");
	return 0;
}