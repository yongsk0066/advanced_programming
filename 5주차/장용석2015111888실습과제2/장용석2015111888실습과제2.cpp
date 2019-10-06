#include <iostream>
#include <string>
using namespace std;

class Box {
private:
	int num, height, surface, inside;
public:
	Box() {
		num = 0;
		height = 1;
		surface = 1;
		inside = 1;
	}
	void setBox(int n, int h, int s) {
		num = n;
		height = h;
		surface = s;
		inside = 0;
	}
	int getVolume() {
		return height * surface;
	}
	bool Empty() {
		return inside;
	}
	void showBox() {
		cout << "박스 " << num << " 부피는 : " << getVolume() << endl;
	}
};

int main() {
	Box boxes[3];
	boxes[0].setBox(1, 7, 11);
	boxes[1].setBox(2, 8, 20);
	boxes[2].setBox(3, 12, 100);

	cout << "===========================" << endl;
	for (int i = 0; i < 3; i++) {
		boxes[i].showBox();
	}
	cout << "===========================" << endl;
	int max = boxes[1].getVolume();
	int count = 0;
	for (int i = 1; i < 3; i++) {
		if (boxes[i].getVolume() > max) {
			max = boxes[i].getVolume();
			count++;
		}
	}

	cout << "박스" << count + 1 << "의 부피가 가장 큽니다. : " << boxes[count].getVolume() << endl;


	return 0;
}
