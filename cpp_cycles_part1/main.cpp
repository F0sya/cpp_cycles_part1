#include <iostream>
using namespace std;

int main() {
	int number; cout << "Enter your number:"; cin >> number;
	int i = 0;
	cout << i << " ";
	while (i++ != number) {
		cout << i << " ";
	}
	return 0;
}