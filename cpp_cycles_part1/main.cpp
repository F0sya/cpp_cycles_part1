#include <iostream>
using namespace std;

int main() {
	int n; cout << "Enter a number:"; cin >> n;
	int res = 1;

	if (n < 0) {
		cout << "Wrong input!" << endl;
		return 0;
	}
	else if (n == 0) {
		cout << "Factorial:" << 1 << endl;
		return 0;
	}
	
	while (n != 0) {
		res *= n;
		n--;
	}
	cout << "Factorial:" << res << endl;
}