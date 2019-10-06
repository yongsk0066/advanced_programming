#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class SelectableRandom {
private:
	int from, to, target, result[10];
public:
	SelectableRandom(int f, int t)
	{
		cout << "Â¦¼ö 0 È¦¼ö 1 ÀÔ·Â ";
		cin >> this->target;
		from = f;
		to = t;
	}
	void print() {
		cout << "-- " << this->from << "¿¡¼­ " << this->to << " ±îÁö ";
		if (this->target == 1) {
			cout << "È¦¼ö ";
		}
		else {
			cout << "Â¦¼ö ";
		}
		cout << "·£´ý Á¤¼ö 10°³ --" << endl;
		for (int i = 0; i < 10; i++) {
			cout << result[i] << " ";
		}
		cout << endl << endl;
	}
	void generateRand() {
		int ran;
		for (int i = 0; i < 10; i++) {
			while (1) {
				ran = (rand() % to + from);
				if (ran % 2 == target) {
					result[i] = ran;
					break;
				}
			}
		}
	};
};



int main() {
	srand((unsigned int)time(NULL));
	SelectableRandom num(0, 32767);
	num.generateRand();
	num.print();

	SelectableRandom num2(2, 9);
	num2.generateRand();
	num2.print();

	return 0;
}