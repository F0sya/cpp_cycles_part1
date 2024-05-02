#include <iostream>
using namespace std;

int main() {
	int left; cout << "Enter left limit:"; cin >> left;
	int right; cout << "Enter right limit:"; cin >> right;
	int sum = 0;
	
	while (left != right + 1) {
		if (left % 2 != 0) {
			sum += left;
		}
		left++;
	}
	cout << "Result:" << sum << endl;
	return 0;
}