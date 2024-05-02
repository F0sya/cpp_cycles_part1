#include <iostream>
using namespace std;

int main() {
	int L; cout << "Enter a length of cloth:"; cin >> L;
	int R; cout << "Enter a length of pillow:"; cin >> R;
	int res = 0;
	while (L != 0) {
		L -= R;
		res++;
	}
	cout << "Amount of pillows:" << res << endl;
	return 0;
}