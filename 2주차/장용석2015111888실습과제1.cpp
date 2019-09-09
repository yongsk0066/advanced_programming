#include <iostream>

using namespace std;

int main() {
	char nameArr[5][20];
	int max;
	int index;

	cout << "5명의 이름을 ';' 으로 구분하여 입력하세요" << endl << ">>";

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

	cout << "가장 긴 이름은 " << nameArr[index] << endl;

	return 0;
}