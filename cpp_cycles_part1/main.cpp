#include <iostream>
using namespace std;

int main() {
	int k; cout << "Enter a variant number:"; cin >> k;
	int i = 1;
	while (i <= 9) {
		cout << k << " * " << i << " = " << k * i << endl;
		i++;
	}
	
}