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

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. �����丮�׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(inputArr, 10000, ';');

	for (int j = 0; j <= 25; j++) {
		result[j].letter = (char)i;
		result[j].number = count(inputArr, inputArr + strlen(inputArr), (char)i);
		result[j].number += count(inputArr, inputArr + strlen(inputArr), (char)(i - 32));
		sum += result[j].number;
		i++;
	}
	
	cout << "�� ���ĺ� �� " << sum << endl << endl;

	for (int j = 0; j <= 25; j++) {

		cout << result[j].letter << "(" << result[j].number << ") : ";
		for (int k = 0; k < result[j].number; k++) {
			cout << "*";
		}
		cout << endl;
	}



	return 0;
}