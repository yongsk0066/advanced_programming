#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

void nmileToMeter() {
	float n;
	cout << "몇 해리인지 입력하세요 : ";
	cin >> n;

	cout << n << "해리는 " << n * 1852 << "미터 입니다.";
}

void meterToNmile() {
	float n;
	cout << "몇 미터인지 입력하세요 : ";
	cin >> n;

	cout << n << "미터는 " << n * 0.5399568 << "해리 입니다.";
}

void feetToMeter() {
	float n;
	cout << "몇 피트인지 입력하세요 : ";
	cin >> n;

	cout << n << "피트는 " << n * 0.3048 << "미터 입니다.";

}

void mileToMeter() {
	float n;
	cout << "몇 마일인지 입력하세요 : ";
	cin >> n;

	cout << n << "마일는 " << n * 1852 << "미터 입니다.";

}

void noteToKilo() {
	float n;
	cout << "몇 노트인지 입력하세요 : ";
	cin >> n;

	cout << n << "노트는 " << n * 0.0006 << "킬로미터 입니다.";
}




int main() {
	int q;


	cout << "원하는 연산을 선택하세요" << endl;
	cout << "1. 해리를 미터로 변환" << endl;
	cout << "2. 미터를 해리로 변환" << endl;
	cout << "3. 피트를 미터로 변환" << endl;
	cout << "4. 마일을 미터로 변환" << endl;
	cout << "5. 노트를 킬로미터퍼시로 변환" << endl << endl;

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