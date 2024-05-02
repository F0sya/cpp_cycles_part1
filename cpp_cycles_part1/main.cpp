#include <iostream>
using namespace std;

int main() {
	int x; cout << "Enter x:"; cin >> x;
	int y; cout << "Enter y:"; cin >> y;
	int res = x;
	if (y == 0) {
		cout << "Result: 1" << endl;
		return 0;
	}
	while (y != 1) {
		y--;
		res *= x;
	}
	cout << "Result:" << res << endl;
	return 0;
}