#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

class Dice {
private:
	int num;
public:
	int roll() {
		this->num = (rand() % 6 + 1);
		return num;
	}
};

int main() {
	srand((unsigned int)time(NULL));

	Dice dice;

	for (int i = 0; i < 10; i++) {
		cout << "�ֻ����� ���ڴ� " << dice.roll() << "�Դϴ�." << endl;
	}

	return 0;

}