#include <iostream>
using namespace std;

int main() {
	int a; cout << "Your input:"; cin >> a;
	int sum = 0;
	if (a > 500) {
		cout << "Your number bigger than max value!(500)" << endl;
		return 0;
	}
	do {
		
		sum += a;
		a++;
	} while (a <= 500);
	cout << "Result:" << sum << endl;
	return 0;
}