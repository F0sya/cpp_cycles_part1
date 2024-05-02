#include <iostream>
using namespace std;

int main() {
	int a; cout << "Your input:"; cin >> a;
	unsigned int res = 1;
	if (a > 20 || a < 1) {
		cout << "Wrong input!" << endl;
		return 0;
	}
	do {
		res *= a;
		a++;
	} while (a != 21);
	cout << res << endl;
	return 0;
}