#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

void getRank(int p[][5], int size) {
	int q, r = 1;
	for (int i = 0; i < size; i++) {
		q = p[0][i];
		for (int j = 0; j < size; j++) {
			if (q < p[0][j]) {
				r++;
			}
		}
		p[1][i] = r;
		r = 1;
	}
}


int main() {

	int score[2][5];

	for (int i = 0; i <= 4; i++) {
		cout << i + 1 << "��° ������ �Է��ϼ��� : ";
		cin >> score[0][i];
	}

	getRank(score, 5);

	for (int i = 0; i < 5; i++) {
		cout << score[0][i] << "�� " << score[1][i] << "��" << endl;
	}

	return 0;
}