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
		cout << i + 1 << "번째 심판의 점수를 입력하세요 : ";
		cin >> score[i];
	}

	sumScore = sum(score) - maxNum(score) - minNum(score);
	cout << "최종 점수는 최고점 " << maxNum(score) << "점과 최하점 ";
	cout << minNum(score) << "점을 뺀 총점 " << sumScore << "점의 평균인 ";
	cout << round((sumScore / 5) * 100) / 100 << "점 입니다." << endl;


	return 0;
}