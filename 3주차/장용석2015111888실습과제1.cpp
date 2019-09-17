#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;


int maxNum(int list[]) {
	int max = list[0];
	for (int i = 1; i <= 6; i++) {
		if (list[i] > max) {
			max = list[i];
		}
	}
	return max;
}

int minNum(int list[]) {
	int min = list[0];
	for (int i = 1; i <= 6; i++) {
		if (list[i] < min) {
			min = list[i];
		}
	}
	return min;
}

float sum(int list[]) {
	float sum = 0;
	for (int i = 0; i <= 6; i++) {
		sum += list[i];
	}
	return sum;
}

int main() {

	int score[7];
	float sumScore;

	for (int i = 0; i <= 6; i++) {
		cout << i + 1 << "��° ������ ������ �Է��ϼ��� : ";
		cin >> score[i];
	}

	sumScore = sum(score) - maxNum(score) - minNum(score);
	cout << "���� ������ �ְ��� " << maxNum(score) << "���� ������ ";
	cout << minNum(score) << "���� �� ���� " << sumScore << "���� ����� ";
	cout << round((sumScore / 5) * 100) / 100 << "�� �Դϴ�." << endl;


	return 0;
}