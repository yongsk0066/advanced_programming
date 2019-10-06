#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

void sort(int *p) {
	int tmp, q;
	while (1) {
		q = 0;
		for (int i = 0; i < 9; i++) {
			if (p[i] < p[i + 1]) {
				tmp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = tmp;
			}
			else {
				q++;
			}
		}
		if (q == 9) break;
	}
}


int main() {
	int arr[10];

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	sort(arr);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}