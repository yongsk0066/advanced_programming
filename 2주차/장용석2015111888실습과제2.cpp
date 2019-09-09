#include <iostream>

using namespace std;

int main() {
	char inputArr[20];

	cout << "문자열 입력>>";
	cin.getline(inputArr, 20, '\n');

	for (int i = 0; i < strlen(inputArr); i++) {
		for (int j = 0; j <= i; j++)
			cout << inputArr[j];
		cout << endl;
	}

	return 0;
}