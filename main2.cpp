#include <iostream>
using namespace std;
int main() {
	int i;
	int k;
	int z;
	cin >> k;
	if (k <= 0) {
		cout << "An error has occurred while reading input data" << endl;
		return 0;
	}
	int *a = new int[k];
	for (i = 0; i < k; i++) {
		cin >> a[i];
	}
	cin >> z;
	if (z <= 0) {
		cout << "An error has occurred while reading input data" << endl;
		return 0;
	}
	int b[ z ], c[ k - z ];
	for (i = 0; i < z; i++) {
		b[i] = a[i];
	}
	for (i = 0; i < k - z; i++) {
		c[i] = a[i + z];
	}
	for (i = 0; i < k - z; i++) {
		cout << c[i] << " ";
	}
	for (i = 0; i < z; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
