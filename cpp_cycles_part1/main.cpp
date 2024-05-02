#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int user_input;

	do {
		cout << "Your input:"; cin >> user_input;
		sum += user_input;
	} while (user_input != 0);

	cout << "Result:" << sum << endl;
}