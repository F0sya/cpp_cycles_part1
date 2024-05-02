#include <iostream>
using namespace std;

int main() {
	char k; cout << "Enter a symbol:"; cin >> k;
	int n; cout << "Enter an amount of symbols:"; cin >> n;
	int axis; cout << "Horizontal(1) or Vertical(2)?"; cin >> axis;
	if (axis == 1) {
		while (n != 0) {
			cout << k;
			n--;
		}
		cout << endl;
		return 0;
	}
	else if (axis == 2) {
		while (n != 0) {
			cout << k << endl;
			n--;
		}
		return 0;
	}
	else {
		cout << "Wrong input" << endl;
		return 0;
	}
}