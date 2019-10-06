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
		cout << "주사위의 숫자는 " << dice.roll() << "입니다." << endl;
	}

	return 0;

}