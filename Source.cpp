#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include"RPS.h"

int main() {
	int a, c = 0, e, f, g = 0, h;
	string b, d;
	srand(time(NULL));//�]�w�H���ü�//
	start:
	money Money(2000, 2000);//���a�H�ιq�����w�X���O2000//
	cout << "�A������٦�:" << Money.getpeomoney() << endl;
	cout << "��誺����٦�:" << Money.getcommoney() << endl;
	while (c != -1 and Money.getcommoney() > 0 and Money.getpeomoney() > 0)/*�]�wĵ�ܭȰj��H�Ψ��b*/{
		cout << "�ФU�`���B:" <<" ";
		cin >> g;
		//���b�]�m//
		if (g >= 0 && g <= Money.getpeomoney()) {
			cout << "�п�J�Ʀr:(1)�ŤM,(2)���Y,(3)��,(-1)���}" << endl;
			cin >> c;
			if (c == 1 || c == 2 || c == 3) {
				if (c == 1) {
					b = "�ŤM";
					//�]�w�@���ܼ� ��K�P�_��Ĺ//
					e = 1;
				}
				else if (c == 2) {
					b = "���Y";
					//�]�w�@���ܼ� ��K�P�_��Ĺ//
					e = 2;
				}
				else {
					b = "��";
					//�]�w�@���ܼ� ��K�P�_��Ĺ//
					e = 3;
				}
				//�]�wa��1~3���ü�//
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
				cout << endl;
				cout << "�q���X�F:" << d << endl;
				cout << endl;
				//�P�_��Ĺ�H�ν�����ಾ//
				if (e - f == 2) {
					cout << "�A��F!!�A���A�F:)" << endl;
					cout << endl;
					Money.lose(g);
					cout << "�A������٦�:" << Money.getpeomoney() << endl;
					cout << "��誺����٦�:" << Money.getcommoney() << endl;
				}
				else if (e > f) {
					cout << "�AĹ�F!!" << endl;
					cout << endl;
					Money.win(g);
					cout << "�A������٦�:" << Money.getpeomoney() << endl;
					cout << "��誺����٦�:" << Money.getcommoney() << endl;
				}
				else if (e == f) {
					cout << "����~�A�Ӥ@���a!" << endl;
					cout << endl;
					cout << "�A������٦�:" << Money.getpeomoney() << endl;
					cout << "��誺����٦�:" << Money.getcommoney() << endl;
				}
				else if (e - f == -2) {
					cout << "�AĹ�F!!" << endl;
					cout << endl;
					Money.win(g);
					cout << "�A������٦�:" << Money.getpeomoney() << endl;
					cout << "��誺����٦�:" << Money.getcommoney() << endl;
				}
				else if (e < f) {
					cout << "�A��F!!�A���A�F:)" << endl;
					cout << endl;
					Money.lose(g);
					cout << "�A������٦�:" << Money.getpeomoney() << endl;
					cout << "��誺����٦�:" << Money.getcommoney() << endl;
				}
			}
			else if (c == -1) {
				goto end;
			}
			//��J1~3�H�~���Ʀr�N�A���s��J�@��//
			else
				cout << "�п�J1~3���Ʀr" << endl;
		}
		else
			cout << "�A��J����`���A�A�����B���A�Э��s��J" << endl;
	}
	if (Money.getpeomoney() > 0)
	{
		cout << "���ߧAĹ�F�o��";
	}
	else
	{
		cout << endl << "�A��F�o���A�U���[�o" << endl;
	}
	cout << "(1)�A�Ӥ@�� (-1)���}" << endl << "�O�_�A�Ӥ@��:" << endl;
	cin >> h;
	if (h == 1)
		goto start;
	else if (h == -1)
		goto end;
	else
		cout << "�п�J1��-1";
end:
	system("pause");
	return 0;
}