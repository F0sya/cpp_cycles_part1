#include <iostream>
#include <Windows.h>

using namespace std;


int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x04);
	cout << "RED - odd numbers" << endl;
	SetConsoleTextAttribute(hConsole, 0x01);
	cout << "Blue - even numbers" << endl;
	SetConsoleTextAttribute(hConsole, 0x02);
	cout << "GREEN - zero" << endl;
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "YELLOW - a multiple of 7 " << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	int left; cout << "\nEnter left limit:"; cin >> left;
	int right; cout << "Enter right limit:"; cin >> right;
	cout << "\nResult:" << endl;
	while (left != right+1) {
		if (left == 0) {
			SetConsoleTextAttribute(hConsole, 0x02);
			cout << left << " ";
			left++;
		}
		else if (left % 7 == 0) {
			SetConsoleTextAttribute(hConsole, 0x0E);
			cout << left << " ";
			left++;
		}
		else if (left % 2 == 0){
			SetConsoleTextAttribute(hConsole, 0x01);
			cout << left << " ";
			left++;
		}
		else if (left % 2 != 0) {
			SetConsoleTextAttribute(hConsole, 0x04);
			cout << left << " ";
			left++;
		}
	}
	SetConsoleTextAttribute(hConsole, 0x0F);
	return 0;
}