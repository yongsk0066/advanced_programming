#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

void nmileToMeter() {
	float n;
	cout << "�� �ظ����� �Է��ϼ��� : ";
	cin >> n;

	cout << n << "�ظ��� " << n * 1852 << "���� �Դϴ�.";
}

void meterToNmile() {
	float n;
	cout << "�� �������� �Է��ϼ��� : ";
	cin >> n;

	cout << n << "���ʹ� " << n * 0.5399568 << "�ظ� �Դϴ�.";
}

void feetToMeter() {
	float n;
	cout << "�� ��Ʈ���� �Է��ϼ��� : ";
	cin >> n;

	cout << n << "��Ʈ�� " << n * 0.3048 << "���� �Դϴ�.";

}

void mileToMeter() {
	float n;
	cout << "�� �������� �Է��ϼ��� : ";
	cin >> n;

	cout << n << "���ϴ� " << n * 1852 << "���� �Դϴ�.";

}

void noteToKilo() {
	float n;
	cout << "�� ��Ʈ���� �Է��ϼ��� : ";
	cin >> n;

	cout << n << "��Ʈ�� " << n * 0.0006 << "ų�ι��� �Դϴ�.";
}




int main() {
	int q;


	cout << "���ϴ� ������ �����ϼ���" << endl;
	cout << "1. �ظ��� ���ͷ� ��ȯ" << endl;
	cout << "2. ���͸� �ظ��� ��ȯ" << endl;
	cout << "3. ��Ʈ�� ���ͷ� ��ȯ" << endl;
	cout << "4. ������ ���ͷ� ��ȯ" << endl;
	cout << "5. ��Ʈ�� ų�ι����۽÷� ��ȯ" << endl << endl;

	cin >> q;

	switch (q) {
	case 1:
		nmileToMeter();
		break;
	case 2:
		meterToNmile();
		break;
	case 3:
		feetToMeter();
		break;
	case 4:
		mileToMeter();
		break;
	case 5:
		noteToKilo();
		break;
	}

	return 0;
}