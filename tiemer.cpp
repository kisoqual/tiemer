// tiemer
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

void count(int sec = 0) {
	cin >> sec;
	if (sec < 0) {
		while (sec < 0) {
			system("cls");
			cout << "\a\033[1;93mIncorrect value!\033[97m Try again\n";
			cout << "\033[97mSeconds: ";
			cin >> sec;
		}
	}
	system("cls");
	for (int i = sec;; i--) {
		cout << "\033[93m" << i << "\033[97m sec remaining";
		Sleep(1000);
		system("cls");
		if (i <= 1) {
			system("cls");
			cout << "\a\033[1;93mTIME UP!1!!\n";
			Sleep(1000);
			break;
		}
	}
}

int main()
{
	system("chcp 65001>NUL");
	SetConsoleTitleA("Tiemer");
	system("cls");
	cout << "\033[107;30mType some seconds to begin\033[0m\n";
	cout << "\033[37m\033[3m1 min = 60 sec\n";
	cout << "\n\033[0m\033[97mSeconds: ";
	count();
	cout << "\033[0m\033[3mPress any key to exit . . .\033[0m";
	system("pause>NUL");
	system("cls");
}