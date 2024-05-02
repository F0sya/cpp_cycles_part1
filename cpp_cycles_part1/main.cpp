#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int left = 1;
	int right = 1000;
	do {
		sum += left;
		left++;
	} while (left != right + 1);

	float res = static_cast<float>(sum) / 1000;
	cout << "Result:" << res << endl;
	return 0;
}