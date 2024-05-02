#include <iostream>
using namespace std;

int main() {
	int N; cout << "Enter an amount of boxes with apples:"; cin >> N;
	int amount; cout << "Enter an amount of boxes that cars can take:"; cin >> amount;
	int res = 0;
	if (N < 0) {
		cout << "Wrong input!" << endl;
		return 0;
	}
	while (N > 0) {
		N -= amount;
		res++;
	}
	cout << "Amount of cars:" << res << endl;
	return 0;
}