#include <iostream>

using namespace std;

int main() {
	char nameArr[5][20];
	int max;
	int index;

	cout << "5���� �̸��� ';' ���� �����Ͽ� �Է��ϼ���" << endl << ">>";

	for (int i = 0; i <= 4; i++) {
		cin.getline(nameArr[i], 100, ';');
	}

	max = strlen(nameArr[0]);

	for (int i = 0; i <= 4; i++) {
		if (max < strlen(nameArr[i])) {
			max = strlen(nameArr[i]);
			index = i;
		}
		cout << i << " : " << nameArr[i] << endl;
	}

	cout << "���� �� �̸��� " << nameArr[index] << endl;

	return 0;
}