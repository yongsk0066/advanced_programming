#include <iostream>

using namespace std;

int main() {
	char inputArr[10000];
	struct combination {
		char letter;
		int number;
	};
	combination result[26];
	int i = 97;
	int sum = 0;

	cout << "영문 텍스트를 입력하세요. 히스토리그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(inputArr, 10000, ';');

	for (int j = 0; j <= 25; j++) {
		result[j].letter = (char)i;
		result[j].number = count(inputArr, inputArr + strlen(inputArr), (char)i);
		result[j].number += count(inputArr, inputArr + strlen(inputArr), (char)(i - 32));
		sum += result[j].number;
		i++;
	}
	
	cout << "총 알파벳 수 " << sum << endl << endl;

	for (int j = 0; j <= 25; j++) {

		cout << result[j].letter << "(" << result[j].number << ") : ";
		for (int k = 0; k < result[j].number; k++) {
			cout << "*";
		}
		cout << endl;
	}



	return 0;
}